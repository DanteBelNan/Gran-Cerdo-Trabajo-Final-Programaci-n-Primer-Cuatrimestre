#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <wchar.h>

#include "rlutil.h"
#include "Estancias.h"
#include "FuncionesL.h"
#include "FuncionesG.h"

using namespace std;

void ingresarNombres(string nombres[])
{
    nombres[0] = "       ";
    nombres[1] = "       ";
    int contLetras[2] = {};
    char nombre[2][8];
    const int x = 15;
    int y = 0, i, letra, z;
    bool bandera=false;

    contLetras[0]=0;
    contLetras[1]=0;

    for(i=0; i<2; i++)
    {
        rlutil::cls();

        rlutil::locate(x-7, 6);
        cout<< "INGRESE NOMBRE DE JUGADOR " <<i+1;

        for(z=0; z<14; z+=2)
        {
            rlutil::locate(x + z, 8);
            cout<< "_";
        }

        z=0;

        do{
            do{
                letra=rlutil::getkey();
            }while(!(((letra>=65)&&(letra<=90))||((letra>=97)&&(letra<=122))||letra==8||letra==1));

                if((letra!=8)&&(letra!=1))
                {
                    nombre[i][z]=toupper((char)letra);
                    rlutil::locate(x + z*2, 8);
                    cout<< nombre[i][z];
                    if(z<6)
                    {
                        z++;
                        contLetras[i]++;
                    }
                    else
                    {
                        z=6;
                        contLetras[i]=7;
                    }
                }
                else if(letra==8)
                {
                    if(bandera==true)
                    {
                        bandera=false;
                    }
                    else
                    {
                        if(z>0 && z<6)
                        {
                            z--;
                            contLetras[i]--;
                        }
                        else if(z==6)z=6;
                        else if(z==0)z=0;
                    }
                    rlutil::locate(x + z*2, 8);
                    cout<< "_";
                    if(z==6)
                    {
                        z--;
                        bandera=true;
                    }
                }

        }while(letra!=1);
    }

    for(i=0;i<2;i++) //Pasa la cadena de caracteres char a string
    {
        for(z=0;z<contLetras[i];z++)
            {
                nombres[i][z] = nombre[i][z];
            }
    }

    rlutil::cls();
}

int azarDado(){
    int valorDado = (rand() % 6)+ 1;
    return valorDado;
}

int funcionDadoMayor(int d1, int d2)
{
    if(d1>d2) return d1;
    else return d2;
}

void tirarDado(int x[], int y[], bool estancia)
{
        if(estancia==true)
    {
        x[0]=(rand()%2)+1;
        y[0]=(rand()%4)+5;
        x[1]=(rand()%1)+10;
        y[1]=(rand()%4)+5;
    }
    else
    {
        x[0]=22;
        y[0]=15+rand()%(19-15);
        x[1]=30;
        y[1]=15+rand()%(19-15);
        x[2]=38;
        y[2]=15+rand()%(19-15);
    }
}

void turno(string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], bool flagMax[2])
{
    char continuar;
    bool bandera=false, cedeTurno;

    do{
        rlutil::cls();

        mostrarInfo(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, juegaPrimero);

        rlutil::locate(17,13);
        cout<< "PRESIONA CUALQUIER TECLA PARA TIRAR";
        rlutil::anykey();
        cedeTurno=lanzamiento(acumTrufas, acumTrufasRonda, juegaPrimero, hundido, cantOinks);

        contLanzamientos[juegaPrimero]++;

        if(cedeTurno==true)
        {
            rlutil::locate(15,26);
            cout<< "PRESIONA CUALQUIER TECLA PARA CONTINUAR...";
            rlutil::anykey();
            break;
        }

        do{
            rlutil::locate(26,26);
            cout<< "Continuar? (S/N)";
            rlutil::locate(34,27);
            cin>>continuar;
            continuar=toupper(continuar);

            switch(continuar)
            {
                case 'S':
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

    }while(continuar=='S');

    if(flagMax[juegaPrimero]==true)
    {
        if(contLanzamientos[juegaPrimero]>maxLanza[juegaPrimero])
        {
            maxLanza[juegaPrimero]=contLanzamientos[juegaPrimero];
        }
    }
    else
    {
        flagMax[juegaPrimero]=true;
        maxLanza[juegaPrimero]=contLanzamientos[juegaPrimero];
    }

    contLanzamientos[juegaPrimero]=0;
}

bool lanzamiento(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[])
{
    int  i, cantDados, contUnos=0, dados[3]={}, x[3], y[3];

    if(((acumTrufas[0]+acumTrufasRonda[0]>=50)&&(acumTrufas[1]+acumTrufasRonda[1]>=50)) || hundido==true)
    {
        cantDados=3;
        hundido=true;
    }
    else cantDados=2;

    tirarDado(x, y, false);

    for(i=0; i<cantDados; i++)
    {
        dados[i]=azarDado();
        mostrarDado(dados[i], x[i], y[i]);
    }

    if(cantDados==2)
    {
        if(dados[0]==dados[1])
        {
            if(dados[0]==1)
            {
                hundido=true;
                hundeBarro(acumTrufas, acumTrufasRonda, juegaPrimero);
                return true;
            }
            else
            {
                oink(acumTrufasRonda, juegaPrimero, dados, cantDados);
                cantOinks[juegaPrimero]++;
                return false;
            }
        }
        else
        {
            if(dados[0]==1 || dados[1]==1)
            {
                pierdeTrufas(acumTrufasRonda, juegaPrimero);
                return true;
            }
            else
            {
                acumulaTrufas(acumTrufasRonda, juegaPrimero, dados, cantDados);
                return false;
            }
        }
    }
    else
    {
        if((dados[0]==dados[1])&&(dados[0]==dados[2]))
        {
            if(dados[0]==1)
            {
                darTrufasAlRival(acumTrufas, acumTrufasRonda, juegaPrimero);
                return true;
            }
            else
            {
                oink(acumTrufasRonda, juegaPrimero, dados, cantDados);
                cantOinks[juegaPrimero];
                return false;
            }
        }
        else
        {
            for(i=0; i<3; i++)
            {
                if(dados[i]==1) contUnos++;
            }

            if(contUnos>0)
            {
                if(contUnos==2)
                {
                    hundeBarro(acumTrufas, acumTrufasRonda, juegaPrimero);
                    return true;
                }
                else
                {
                    pierdeTrufas(acumTrufasRonda, juegaPrimero);
                    return true;
                }
            }
            else
            {
                acumulaTrufas(acumTrufasRonda, juegaPrimero, dados, cantDados);
                return false;
            }
        }
    }
}

void acumulaTrufas(int acumTrufasRonda[], bool juegaPrimero, int dados[], int cantDados)
{
    int suma=0;
    for(int i=0; i<cantDados; i++)
    {
        suma += dados[i];
    }
    acumTrufasRonda[juegaPrimero]+=suma;

    acumulaTrufas(suma);
}

void oink(int acumTrufasRonda[], bool juegaPrimero, int dados[], int cantDados)
{
    int suma=0, total;
    for(int i=0; i<cantDados; i++)
    {
        suma+=dados[i];
    }
    total=suma*2;
    acumTrufasRonda[juegaPrimero]+=total;

    oink(total);
}

void pierdeTrufas(int acumTrufasRonda[], bool juegaPrimero)
{
    acumTrufasRonda[juegaPrimero]=0;

    pierdeTrufas();
}

void hundeBarro(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero)
{
    acumTrufas[juegaPrimero]=0;
    acumTrufasRonda[juegaPrimero]=0;

    hundeBarro();
}

void darTrufasAlRival(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero)
{
    acumTrufas[!juegaPrimero]+= acumTrufas[juegaPrimero] + acumTrufasRonda[juegaPrimero];
    acumTrufas[juegaPrimero]=0;
    acumTrufasRonda[juegaPrimero]=0;

    darTrufasAlRival();
}

void estadisticas(string leaderboard[], string nombres, int puntuaciones[], int totalpdv)
{
    if(totalpdv>=puntuaciones[1]){
        reacomodo(1, puntuaciones, totalpdv, leaderboard, nombres);
    }
    else
    {
        if(puntuaciones[0] == 0)
        {
            puntuaciones[0] = totalpdv;
            leaderboard[0] = nombres;
        }
        else
        {
            for(int top = 10; top>=1;top--)
            {

                if(totalpdv>=puntuaciones[top] && totalpdv<=puntuaciones[top-1])
                {
                    reacomodo(top, puntuaciones, totalpdv, leaderboard, nombres);
                    top = 1;
                }
            }
        }
    }
}

void reacomodo(int pos, int puntuaciones[],int totalpdv, string leaderboard[], string nombres)
{
    for(int desplaz = 8;desplaz>=pos;desplaz--)
    {
        puntuaciones[desplaz+1] = puntuaciones[desplaz];
        leaderboard[desplaz+1] = leaderboard[desplaz];
    }

    puntuaciones[pos] = totalpdv;
    leaderboard[pos] = nombres;
}
