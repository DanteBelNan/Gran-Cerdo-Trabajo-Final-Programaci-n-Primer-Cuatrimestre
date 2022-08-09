#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <wchar.h>
#include <stdio.h>

#include "rlutil.h"
#include "Estancias.h"
#include "FuncionesL.h"
#include "FuncionesG.h"

using namespace std;

void menuPrincipal(string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], int totalpdv[], bool flagMax[2], int puntuaciones[], string leaderboard[])
{
    const int x = 15;
    const char f = 175;
    const char e = 174;
    char salir;
    bool bandera=false;
    int op = 1, key, y = 0;

    acumTrufas[0]=0;
    acumTrufas[1]=0;
    contRondas=0;
    hundido=false;
    cantOinks[0]=0;
    cantOinks[1]=0;
    maxLanza[0]=0;
    maxLanza[1]=0;
    totalpdv[0]=0;
    totalpdv[1]=0;
    flagMax[0]=false;
    flagMax[1]=false;



    rlutil::hidecursor();

    do{
        mostrarCuadro(1);

        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(x, 8);
        cout<< "   JUGAR";
        rlutil::locate(x, 9);
        cout<< "ESTADISTICAS";
        rlutil::locate(x, 10);
        cout<< "  CERDITOS";
        rlutil::locate(x, 11);
        cout<< "   SALIR";

        rlutil::locate(x - 2, 8 + y);
        cout<< f ;
        rlutil::locate(x + 13, 8 + y);
        cout<< e ;

        key = rlutil::getkey();

        switch(key)
        {
            case 14:
                rlutil::locate(x - 2, 8 + y);
                cout<< " " ;
                rlutil::locate(x + 13, 8 + y);
                cout<< " " ;
                y--;
                if(y<0) y=0;
                break;
            case 15:
                rlutil::locate(x - 2, 8 + y);
                cout<< " " ;
                rlutil::locate(x + 13, 8 + y);
                cout<< " " ;
                y++;
                if(y>3) y=3;
                break;
            case 1:
                switch(y)
                {
                    case 0:
                        ingresarNombres(nombres);
                        tiraPrimero(nombres, juegaPrimero);

                        for(contRondas=0; contRondas<5; contRondas++)
                        {
                            ronda(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, juegaPrimero, hundido, cantOinks, maxLanza, flagMax);
                        }

                        quienGana(nombres, totalpdv, acumTrufas, cantOinks, maxLanza, puntuaciones, leaderboard);

                        menuPrincipal(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, juegaPrimero, hundido, cantOinks, maxLanza, totalpdv, flagMax, puntuaciones, leaderboard);
                        break;
                    case 1:
                        mostrarEstadisticas(leaderboard, puntuaciones);
                        break;
                    case 2:
                        cerditos();
                        break;
                    case 3:
                        do{
                            rlutil::locate(9,13);
                            cout<< "Confirme para salir (S/N)";
                            rlutil::locate(21,14);
                            cin>>salir;
                            salir=toupper(salir);

                            switch(salir)
                            {
                                case 'S':
                                    op=0;
                                    bandera=true;
                                break;
                                case 'N':
                                    bandera=true;
                                break;
                                default:
                                    cout<< "opcion incorrecta, vuelva a intentarlo." <<endl;
                                    bandera=false;
                                break;
                            }

                        }while(bandera==false);
                        rlutil::locate(9,13);
                        cout<< "                         ";
                        rlutil::locate(21,14);
                        cout<< "                         ";
                        break;
                }
                break;
            default:
                break;
        }

    }while(op!=0);
}

void tiraPrimero(string nombres[], bool &juegaPrimero)
{
    int i, j, dados[2][2], suma[2], dadoMayor[2], x[2], y[2];

    for(i=0;i<2;i++)
    {
        cout<< nombres[i] <<endl << "PRESIONA CUALQUIER TECLA PARA TIRAR" <<endl;
        rlutil::anykey();

        tirarDado(x, y, true);

        for(j=0;j<2;j++)
        {
            dados[i][j]= azarDado();
            mostrarDado(dados[i][j], x[j], y[j]);
        }

        rlutil::anykey();
        rlutil::cls();

        suma[i]= dados[i][0] + dados[i][1];
        dadoMayor[i]=funcionDadoMayor(dados[i][0],dados[i][1]);

        if(i==0) cout<< "A SUPERAR " << dados[i][0] << " + " << dados[i][1] << " = " << suma[i] <<endl;
    }

    if(suma[0]==suma[1])
    {
        if(dadoMayor[0]==dadoMayor[1])
        {
             cout<< "HUBO EMPATE, VUELVAN A TIRAR" <<endl;
             rlutil::anykey();
             rlutil::cls();
             tiraPrimero(nombres, juegaPrimero);
        }
        else if(dadoMayor[0]>dadoMayor[1])
        {
            juegaPrimero=0;
            quienPrimero(nombres, 0, " tuvo el dado de mayor valor");
        }
        else
        {
            juegaPrimero=1;
            quienPrimero(nombres, 1, " tuvo el dado de mayor valor");
        }
    }
    else if(suma[0]>suma[1])
    {
        juegaPrimero=0;
        quienPrimero(nombres, 0, " la suma de sus dados es mayor");
    }
    else
    {
        juegaPrimero=1;
        quienPrimero(nombres, 1, " la suma de sus dados es mayor");
    }

    cout<< "PRESIONA CUALQUIER TECLA PARA CONTINUAR...";
    rlutil::anykey();
    rlutil::cls();
}

void ronda(string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], bool flagMax[2])
{
    //Turno del primer jugador
    turno(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, juegaPrimero, hundido, cantOinks, maxLanza, flagMax);

    //Turno del segundo jugador
    turno(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, !juegaPrimero, hundido, cantOinks, maxLanza, flagMax);

    contLanzamientos[0]=0;
    contLanzamientos[1]=0;
    acumTrufas[0] += acumTrufasRonda[0];
    acumTrufas[1] += acumTrufasRonda[1];
    acumTrufasRonda[0]=0;
    acumTrufasRonda[1]=0;

    rlutil::anykey();
    rlutil::cls();
}

void quienGana(string nombres[], int totalpdv[], int acumTrufas[], int cantOinks[], int maxLanza[], int puntuaciones[], string leaderboard[])
{
    int pdv[2][4] = {};
    int truf50[2];
    int i, j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            pdv[i][j]=0;
        }
    }

    truf50[0]=0;
    truf50[1]=0;

    //Estas lineas determinan quien tiene mas trufas
    if(acumTrufas[0]==acumTrufas[1])
    {
        pdv[0][0] = 5;
        pdv[1][0] = 5;
    }
    else if(acumTrufas[0]>acumTrufas[1])
    {
        pdv[0][0] = 5;
    }
    else
    {
        pdv[1][0] = 5;
    }

    //Otorga puntos de victoria cada 50 trufas
    for(i=0;i<2;i++){
        truf50[i]=(acumTrufas[i]-(acumTrufas[i]%50));
    }
    pdv[0][1]=truf50[0]/50;
    pdv[1][1]=truf50[1]/50;

    //Oinks
    pdv[0][2] = cantOinks[0] * 2;
    pdv[1][2] = cantOinks[1] * 2;

    //Cerdo Codicioso
    if(maxLanza[0]==maxLanza[1])
    {
        pdv[0][3] = 3;
        pdv[1][3] = 3;
    }
    else if(maxLanza[0]>maxLanza[1])
    {
        pdv[0][3] = 3;
    }
    else
    {
        pdv[1][3] = 3;
    }

    //Sumador de Puntos (determina ganador en funcion grafica)
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            totalpdv[i] += pdv[i][j];
        }
    }

    estadisticas(leaderboard, nombres[0], puntuaciones, totalpdv[0]);
    estadisticas(leaderboard, nombres[1], puntuaciones, totalpdv[1]);

    mostrarGanador(nombres,acumTrufas,truf50,cantOinks,maxLanza, pdv, totalpdv, puntuaciones, leaderboard);
}
