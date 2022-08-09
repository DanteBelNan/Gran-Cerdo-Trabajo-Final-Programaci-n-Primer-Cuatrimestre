#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <wchar.h>
#

#include "rlutil.h"
#include "Estancias.h"
#include "FuncionesL.h"
#include "FuncionesG.h"

using namespace std;

void mostrarCuadro(int opcion)
{
    const char a = 201;
    const char b = 200;
    const char c = 187;
    const char d = 188;
    const char e = 205;
    const char f = 186;

    rlutil::setColor(rlutil::LIGHTMAGENTA);

    switch(opcion)
    {
        case 1:
            rlutil::locate(11, 7);
            cout<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<c;
            rlutil::locate(11, 8);
            cout<<f<<"                  "<<f;
            rlutil::locate(11, 9);
            cout<<f<<"                  "<<f;
            rlutil::locate(11, 10);
            cout<<f<<"                  "<<f;
            rlutil::locate(11, 11);
            cout<<f<<"                  "<<f;
            rlutil::locate(11, 12);
            cout<<b<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<d;
            break;
        case 2:
            rlutil::locate(2, 10);
            cout<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
                <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<c;
            rlutil::locate(2, 11);
            cout<<f<<"                                                                         "<<f;
            rlutil::locate(2, 12);
            cout<<f<<"                                                                         "<<f;
            rlutil::locate(2, 13);
            cout<<f<<"                                                                         "<<f;
            rlutil::locate(2, 14);
            cout<<f<<"                                                                         "<<f;
            rlutil::locate(2, 15);
            cout<<b<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
                <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<d;
            break;
        case 3:
            rlutil::locate(11, 5);
            cout<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<c;
            rlutil::locate(11, 6);
            cout<<f<<" 1-                 "<<f;
            rlutil::locate(11, 7);
            cout<<f<<" 2-                 "<<f;
            rlutil::locate(11, 8);
            cout<<f<<" 3-                 "<<f;
            rlutil::locate(11, 9);
            cout<<f<<" 4-                 "<<f;
            rlutil::locate(11, 10);
            cout<<f<<" 5-                 "<<f;
            rlutil::locate(11, 11);
            cout<<f<<" 6-                 "<<f;
            rlutil::locate(11, 12);
            cout<<f<<" 7-                 "<<f;
            rlutil::locate(11, 13);
            cout<<f<<" 8-                 "<<f;
            rlutil::locate(11, 14);
            cout<<f<<" 9-                 "<<f;
            rlutil::locate(11, 15);
            cout<<f<<" 10-                "<<f;
            rlutil::locate(11, 16);
            cout<<b<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<d;
            break;
        case 4:
            rlutil::locate(20, 5);
            cout<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<c;
            rlutil::locate(20, 6);
            cout<<f<<"                         "<<f;
            rlutil::locate(20, 7);
            cout<<f<<"                         "<<f;
            rlutil::locate(20, 8);
            cout<<f<<"                         "<<f;
            rlutil::locate(20, 9);
            cout<<b<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<d;
            break;
        case 5:
            rlutil::locate(9, 7);
            cout<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<c;
            rlutil::locate(9, 8);
            cout<<f<<"                       "<<f;
            rlutil::locate(9, 9);
            cout<<f<<"                       "<<f;
            rlutil::locate(9, 10);
            cout<<f<<"                       "<<f;
            rlutil::locate(9, 11);
            cout<<f<<"                       "<<f;
            rlutil::locate(9, 12);
            cout<<b<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<d;
            break;

    }

}

void mostrarDado(int valorDado, int x, int y)
{
    const char a = 219;
    const char b = 223;
    const char c = 220;

    switch(valorDado)
    {
        case 1:
            rlutil::locate(x, y);
            cout<<a<<a<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+1);
            cout<<a<<a<<a<<b<<a<<a<<a;
            rlutil::locate(x, y+2);
            cout<<a<<a<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
        case 2:
            rlutil::locate(x, y);
            cout<<a<<b<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+1);
            cout<<a<<a<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+2);
            cout<<a<<a<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
        case 3:
            rlutil::locate(x, y);
            cout<<a<<b<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+1);
            cout<<a<<a<<a<<b<<a<<a<<a;
            rlutil::locate(x, y+2);
            cout<<a<<a<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
        case 4:
            rlutil::locate(x, y);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+1);
            cout<<a<<a<<a<<a<<a<<a<<a;
            rlutil::locate(x, y+2);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
        case 5:
            rlutil::locate(x, y);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+1);
            cout<<a<<a<<a<<b<<a<<a<<a;
            rlutil::locate(x, y+2);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
        case 6:
            rlutil::locate(x, y);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+1);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+2);
            cout<<a<<b<<a<<a<<a<<b<<a;
            rlutil::locate(x, y+3);
            cout<<b<<b<<b<<b<<b<<b<<b;
            break;
    }
}

void quienPrimero(string nombres[], int jugador, string mensaje)
{
    cout<<"Juega primero " <<nombres[jugador] <<mensaje <<endl;
}

void mostrarInfo(string nombres[], int acumTrufas[], int contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero)
{
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(1,1);
    cout<< nombres[0] << ": " <<acumTrufas[0] << " TRUFAS ACUMULADAS";
    rlutil::locate(37,1);
    cout<< nombres[1] << ": " <<acumTrufas[1] << " TRUFAS ACUMULADAS";
    rlutil::locate(25,3);
    cout<< "TURNO DE " <<nombres[juegaPrimero] <<endl;

    mostrarCuadro(4);

    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(29,6);
    cout<< "RONDAS #" <<contRondas+1;
    rlutil::locate(22,7);
    cout<< "TRUFAS DE LA RONDA: " <<acumTrufasRonda[juegaPrimero];
    rlutil::locate(26,8);
    cout<< "LANZAMIENTOS: " <<contLanzamientos[juegaPrimero];
    rlutil::locate(26,11);
    cout<< "LANZAMIENTO #" <<contLanzamientos[juegaPrimero]+1 <<endl<<endl;

    chanchito();
}

void acumulaTrufas(int suma)
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;
    int i;

    rlutil::locate(25, 23);
    cout<< "Sumaste " <<suma <<" trufas!!";

    for(i=0;i<3;i++){

        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::locate(x, y);
        cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x, y+1);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x, y+2);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
        rlutil::locate(x, y+3);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
        rlutil::locate(x, y+4);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";
        rlutil::locate(x, y+5);
        cout<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" ";

        rlutil::msleep(300);
        rlutil::locate(x, y);
        cout<<"               ";
        rlutil::locate(x, y+1);
        cout<<"               ";
        rlutil::locate(x, y+2);
        cout<<"               ";
        rlutil::locate(x, y+3);
        cout<<"               ";
        rlutil::locate(x, y+4);
        cout<<"               ";
        rlutil::locate(x, y+5);
        cout<<"               ";

        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::locate(x, y);
        cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x, y+1);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x, y+2);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
        rlutil::locate(x, y+3);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
        rlutil::locate(x, y+4);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

        rlutil::msleep(300);
        rlutil::locate(x, y);
        cout<<"               ";
        rlutil::locate(x, y+1);
        cout<<"               ";
        rlutil::locate(x, y+2);
        cout<<"               ";
        rlutil::locate(x, y+3);
        cout<<"               ";
        rlutil::locate(x, y+4);
        cout<<"               ";
        rlutil::locate(x, y+5);
        cout<<"               ";

    }

    chanchito();
}

void oink(int total)
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;
    int i;

    rlutil::locate(32, 23);
    cout<< "OINK!!";
    rlutil::locate(20, 24);
    cout<< "Tus trufas se multiplican!! :)";
    rlutil::locate(25, 25);
    cout<< "Sumaste " <<total <<" trufas!!";

    for(i=0;i<3;i++){
        //chanchito
        rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
        rlutil::locate(x, y);
        cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x, y+1);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x, y+2);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
        rlutil::locate(x, y+3);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
        rlutil::locate(x, y+4);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";
        rlutil::locate(x, y+5);
        cout<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" ";

        //oink
        rlutil::locate(x-7, y-6);
        cout<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<c;
        rlutil::locate(x-7, y-5);
        cout<<a<<" "<<a<<b<<a<<" "<<a<<" "<<a<<c<<" "<<a<<" "<<a<<c<<b<<" "<<a;
        rlutil::locate(x-7, y-4);
        cout<<a<<" "<<a<<c<<a<<" "<<a<<" "<<a<<" "<<b<<a<<" "<<a<<b<<c<<" "<<a;
        rlutil::locate(x-7, y-3);
        cout<<b<<c<<c<<c<<c<<" "<<" "<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b;
        rlutil::locate(x-7, y-2);
        cout<<" "<<" "<<" "<<" "<<" "<<b<<c<<a;
        rlutil::locate(x-7, y-1);
        cout<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b;

        rlutil::msleep(300);//borra chanchito
        rlutil::locate(x, y);
        cout<<"               ";
        rlutil::locate(x, y+1);
        cout<<"               ";
        rlutil::locate(x, y+2);
        cout<<"               ";
        rlutil::locate(x, y+3);
        cout<<"               ";
        rlutil::locate(x, y+4);
        cout<<"               ";
        rlutil::locate(x, y+5);
        cout<<"               ";

        rlutil::locate(x-7, y-6); //borra oink
        cout<<"                  ";
        rlutil::locate(x-7, y-5);
        cout<<"                  ";
        rlutil::locate(x-7, y-4);
        cout<<"                  ";
        rlutil::locate(x-7, y-3);
        cout<<"                  ";
        rlutil::locate(x-7, y-2);
        cout<<"                  ";
        rlutil::locate(x-7, y-1);
        cout<<"                  ";

        rlutil::setColor(rlutil::LIGHTMAGENTA); //chanchito para abajo
        rlutil::locate(x, y+1);
        cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x, y+2);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x, y+3);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
        rlutil::locate(x, y+4);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
        rlutil::locate(x, y+5);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

        rlutil::msleep(300);//borra chanchito
        rlutil::locate(x, y);
        cout<<"               ";
        rlutil::locate(x, y+1);
        cout<<"               ";
        rlutil::locate(x, y+2);
        cout<<"               ";
        rlutil::locate(x, y+3);
        cout<<"               ";
        rlutil::locate(x, y+4);
        cout<<"               ";
        rlutil::locate(x, y+5);
        cout<<"               ";

    }

    chanchito();

}

void pierdeTrufas()
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;
    const int t = 250;

    rlutil::locate(10, 23);
    cout<< "Perdiste todas tus trufas acumuladas esta ronda :(";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<c<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    chanchito();
}

void hundeBarro()
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;
    const int t = 250;

    rlutil::locate(22, 23);
    cout<< "TE HUNDISTE EN EL BARRO!!";
    rlutil::locate(2, 24);
    cout<< "Perdiste todas tus trufas acumuladas esta ronda y las anteriores:(";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
    rlutil::locate(x, y);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+1);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
    rlutil::locate(x, y+3);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
    rlutil::locate(x, y+4);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
    rlutil::locate(x, y+2);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+4);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
    rlutil::locate(x, y+3);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+4);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
    rlutil::locate(x, y+4);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    //chanchito hundiendose en el barro
    rlutil::setColor(rlutil::BROWN);
    rlutil::locate(x, y+5);
    cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b;

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    chanchito();
}

void darTrufasAlRival()
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;
    const int t = 250;

    rlutil::locate(2, 23);
    cout<< "Perdiste todas tus trufas acumuladas esta ronda y las anteriores:(";
    rlutil::locate(22, 24);
    cout<< "Tus trufas pasan al rival";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<c<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y+1);
    cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+3);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
    rlutil::locate(x, y+4);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

    rlutil::msleep(t);//borra chanchito
    rlutil::locate(x, y);
    cout<<"               ";
    rlutil::locate(x, y+1);
    cout<<"               ";
    rlutil::locate(x, y+2);
    cout<<"               ";
    rlutil::locate(x, y+3);
    cout<<"               ";
    rlutil::locate(x, y+4);
    cout<<"               ";
    rlutil::locate(x, y+5);
    cout<<"               ";

    chanchito();
}

void mostrarGanador(string nombres[],int acumTrufas[],int truf50[], int cantOinks[],int maxLanza[],  int pdv[][4], int totalpdv[], int puntuaciones[], string leaderboard[])
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 28;

    rlutil::hidecursor();

    rlutil::setColor(rlutil::RED);
    rlutil::locate(x, 2);
    cout<<a<<b<<b<<b<<" "<<a<<b<<b<<a<<" "<<a<<c<<" "<<c<<a<<" "<<a<<b<<b<<b;
    rlutil::locate(x, 3);
    cout<<a<<" "<<b<<a<<" "<<a<<b<<b<<a<<" "<<a<<" "<<b<<" "<<a<<" "<<a<<b<<b;
    rlutil::locate(x, 4);
    cout<<b<<b<<b<<b<<" "<<b<<" "<<" "<<b<<" "<<b<<" "<<" "<<" "<<b<<" "<<b<<b<<b<<b;
    rlutil::locate(x, 5);
    cout<<a<<b<<b<<a<<" "<<a<<" "<<" "<<" "<<a<<" "<<a<<b<<b<<b<<" "<<a<<b<<b<<a;
    rlutil::locate(x, 6);
    cout<<a<<" "<<" "<<a<<" "<<b<<c<<" "<<c<<b<<" "<<a<<b<<b<<" "<<" "<<a<<b<<b<<c;
    rlutil::locate(x, 7);
    cout<<b<<b<<b<<b<<" "<<" "<<" "<<b<<" "<<" "<<" "<<b<<b<<b<<b<<" "<<b<<" "<<" "<<b;

    mostrarCuadro(2);

    rlutil::setColor(rlutil::WHITE);
    //fila 1
    rlutil::locate(3, 9);//columna 1
    cout<<"HITO";
    rlutil::locate(28, 9);//columna 2
    cout<<nombres[0];
    rlutil::locate(53, 9);//columna 3
    cout<<nombres[1];

    //fila 2
    rlutil::locate(3, 11);//columna 1
    cout<<"MAS TRUFAS EN TOTAL";
    rlutil::locate(28, 11);//columna 2
    cout<<pdv[0][0]<<" PDV ("<<acumTrufas[0]<<" trufas)";
    rlutil::locate(53, 11);//columna 3
    cout<<pdv[1][0]<<" PDV ("<<acumTrufas[1]<<" trufas)";

    //fila 3
    rlutil::locate(3, 12);//columna 1
    cout<<"CADA 50 TRUFAS";
    rlutil::locate(28, 12);//columna 2
    cout<<pdv[0][1]<<" PDV ("<<truf50[0]<<" trufas)";
    rlutil::locate(53, 12);//columna 3
    cout<<pdv[1][1]<<" PDV ("<<truf50[1]<<" trufas)";

    //fila 4
    rlutil::locate(3, 13);//columna 1
    cout<<"OINKS";
    rlutil::locate(28, 13);//columna 2
    cout<<pdv[0][2]<<" PDV ("<<cantOinks[0]<<" oinks)";
    rlutil::locate(53, 13);//columna 3
    cout<<pdv[1][2]<<" PDV ("<<cantOinks[1]<<" oinks)";

    //fila 5
    rlutil::locate(3, 14);//columna 1
    cout<<"CERDO CODICIOSO";
    rlutil::locate(28, 14);//columna 2
    cout<<pdv[0][3]<<" PDV ("<<maxLanza[0]<<" lanzamientos)";
    rlutil::locate(53, 14);//columna 3
    cout<<pdv[1][3]<<" PDV ("<<maxLanza[1]<<" lanzamientos)";

    //fila 6
    rlutil::locate(3, 16);//columna 1
    cout<<"TOTAL";
    rlutil::locate(28, 16);//columna 2
    cout<<totalpdv[0]<<" PDV";
    rlutil::locate(53, 16);//columna 3
    cout<<totalpdv[1]<<" PDV";

    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(30, 18);
    cout<<"   "<<a<<c<<a<<c<<a;
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(30, 19);
    cout<<"  "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<c;
    rlutil::locate(30, 20);
    cout<<" "<<a<<c<<"  "<<c<<"      "<<a;
    rlutil::locate(30, 21);
    cout<<a<<b<<a<<b<<a<<"       "<<a<<b<<c;
    rlutil::locate(30, 22);
    cout<<b<<a<<b<<b<<b<<"       "<<a;
    rlutil::locate(30, 23);
    cout<<"  "<<b<<a<<b<<a<<b<<b<<b<<a<<b<<a;

    //Determina ganador aca porque es mas simple
    rlutil::setColor(rlutil::YELLOW);
    if(totalpdv[0]==totalpdv[1])//Caso empate
    {
        rlutil::locate(34, 25);
        cout<<"EMPATE";
        rlutil::locate(27, 26);
        cout<<totalpdv[0]<<" PUNTOS DE VICTORIA"<<endl;
    }
    else if(totalpdv[0]>totalpdv[1])//Caso Gana j1
    {
        rlutil::locate(34, 25);
        cout<<nombres[0];
        rlutil::locate(27, 26);
        cout<<totalpdv[0]<<" PUNTOS DE VICTORIA";
    }
    else//Caso Gana j2
    {
        rlutil::locate(34, 25);
        cout<<nombres[1];
        rlutil::locate(27, 26);
        cout<<totalpdv[1]<<" PUNTOS DE VICTORIA";
    }

    do{
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(24, 28);
        cout<< "INGRESE OINK PARA CONTINUAR";

        rlutil::msleep(300);
        rlutil::locate(24, 28);
        cout<< "                           ";

        rlutil::msleep(300);
    }while(rlutil::nb_getch()==0);


    rlutil::cls();

}

void mostrarEstadisticas(string leaderboard[], int puntuaciones[])
{
    rlutil::cls();
    mostrarCuadro(3);
    rlutil::setColor(rlutil::WHITE);

    for(int top = 1;top<=10;top++)
    {
        rlutil::locate(16, 5+top);
        cout<<leaderboard[top]<<" - "<<puntuaciones[top]<<"PDV";
    }

    rlutil::anykey();
    rlutil::cls();
}

void cerditos()
{
    rlutil::cls();
    mostrarCuadro(5);

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(10, 8);
    cout<<"25635";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(10, 9);
    cout<<"26101";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(10, 10);
    cout<<"26116";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(10, 11);
    cout<<"25680";

    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(15, 8);
    cout<<" - Beltran Dante";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(15, 9);
    cout<<" - Rolon Raul";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(15, 10);
    cout<<" - Ruiz Nicolas";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(15, 11);
    cout<<" - Herrera Esteban";

    rlutil::anykey();
    rlutil::cls();
}

void chanchito()
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 70;
    const int y = 12;

    rlutil::setColor(rlutil::LIGHTMAGENTA);
    rlutil::locate(x, y);
    cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
    rlutil::locate(x, y+1);
    cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
    rlutil::locate(x, y+2);
    cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
    rlutil::locate(x, y+3);
    cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
    rlutil::locate(x, y+4);
    cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";
    rlutil::locate(x, y+5);
    cout<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" ";
    rlutil::setColor(rlutil::WHITE);
}

void cerditoCagando()
{
    const char a = 219;
    const char b = 223;
    const char c = 220;
    const int x = 15;
    int i;

    system("title GRAN CERDO");
    rlutil::hidecursor();

    rlutil::locate(x, 2);//GRAN linea 1
    cout<<" "<<" "<<a<<b<<b<<b<<" "<<a<<b<<b<<a<<" "<<a<<b<<b<<a<<" "<<a<<c<<" "<<a;
    rlutil::locate(x, 3);//GRAN linea 2
    cout<<" "<<" "<<a<<" "<<b<<a<<" "<<a<<b<<b<<c<<" "<<a<<b<<b<<a<<" "<<a<<" "<<b<<a;
    rlutil::locate(x, 4);//GRAN linea 3
    cout<<" "<<" "<<b<<b<<b<<b<<" "<<b<<" "<<" "<<b<<" "<<b<<" "<<" "<<b<<" "<<b<<" "<<" "<<b;
    rlutil::locate(x, 5);//CERDO linea 1
    cout<<a<<b<<b<<b<<" "<<a<<b<<b<<b<<" "<<a<<b<<b<<a<<" "<<a<<b<<b<<c<<" "<<a<<b<<b<<a;
    rlutil::locate(x, 6);//CERDO linea 2
    cout<<a<<" "<<" "<<" "<<" "<<a<<b<<b<<" "<<" "<<a<<b<<b<<c<<" "<<a<<" "<<" "<<a<<" "<<a<<" "<<" "<<a;
    rlutil::locate(x, 7);//CERDO linea 3
    cout<<b<<b<<b<<b<<" "<<b<<b<<b<<b<<" "<<b<<" "<<" "<<b<<" "<<b<<b<<b<<" "<<" "<<b<<b<<b<<b;

    do{
        //chanchito
        rlutil::setColor(rlutil::LIGHTMAGENTA);//chanchito para arriba
        rlutil::locate(x+8, 15);
        cout<<" "<<" "<<a<<c<<c<<c<<c<<a<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x+8, 16);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x+8, 17);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<" ";
        rlutil::locate(x+8, 18);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<b;
        rlutil::locate(x+8, 19);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";
        rlutil::locate(x+8, 20);
        cout<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" "<<b<<" "<<b<<" "<<" "<<" ";

        //oink
        rlutil::locate(x+1, 9);
        cout<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<c;
        rlutil::locate(x+1, 10);
        cout<<a<<" "<<a<<b<<a<<" "<<a<<" "<<a<<c<<" "<<a<<" "<<a<<c<<b<<" "<<a;
        rlutil::locate(x+1, 11);
        cout<<a<<" "<<a<<c<<a<<" "<<a<<" "<<a<<" "<<b<<a<<" "<<a<<b<<c<<" "<<a;
        rlutil::locate(x+1, 12);
        cout<<b<<c<<c<<c<<c<<" "<<" "<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b;
        rlutil::locate(x+1, 13);
        cout<<" "<<" "<<" "<<" "<<" "<<b<<c<<a;
        rlutil::locate(x+1, 14);
        cout<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b;

        rlutil::msleep(300);//borra chanchito
        rlutil::locate(x+8, 15);
        cout<<"               ";
        rlutil::locate(x+8, 16);
        cout<<"               ";
        rlutil::locate(x+8, 17);
        cout<<"               ";
        rlutil::locate(x+8, 18);
        cout<<"               ";
        rlutil::locate(x+8, 19);
        cout<<"               ";
        rlutil::locate(x+8, 20);
        cout<<"               ";

        rlutil::locate(x+1, 9); //borra oink
        cout<<"                  ";
        rlutil::locate(x+1, 10);
        cout<<"                  ";
        rlutil::locate(x+1, 11);
        cout<<"                  ";
        rlutil::locate(x+1, 12);
        cout<<"                  ";
        rlutil::locate(x+1, 13);
        cout<<"                  ";
        rlutil::locate(x+1, 14);
        cout<<"                  ";

        rlutil::setColor(rlutil::LIGHTMAGENTA); //chanchito para abajo
        rlutil::locate(x+8, 16);
        cout<<" "<<" "<<c<<a<<c<<c<<a<<c<<c<<c<<c<<" "<<" "<<" "<<" ";
        rlutil::locate(x+8, 17);
        cout<<" "<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<b<<c<<" "<<" ";
        rlutil::locate(x+8, 18);
        cout<<c<<a<<a<<c<<c<<b<<" "<<" "<<" "<<" "<<" "<<" "<<a<<c<<b;
        rlutil::locate(x+8, 19);
        cout<<a<<c<<a<<c<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" "<<" ";
        rlutil::locate(x+8, 20);
        cout<<" "<<b<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<b<<" "<<" ";

        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(x, 22); //cartelito cargando
        cout<< "PRESIONE CUALQUIER TECLA" <<endl;

        rlutil::msleep(300);//borra chanchito
        rlutil::locate(x+8, 15);
        cout<<"               ";
        rlutil::locate(x+8, 16);
        cout<<"               ";
        rlutil::locate(x+8, 17);
        cout<<"               ";
        rlutil::locate(x+8, 18);
        cout<<"               ";
        rlutil::locate(x+8, 19);
        cout<<"               ";
        rlutil::locate(x+8, 20);
        cout<<"               ";

        rlutil::locate(x, 22); //cartelito cargando
        cout<< "                        " <<endl;

    }while(rlutil::nb_getch()==0);

    rlutil::cls();
}

