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

int main()
{
    system("title GRAN CERDO");
    string nombres[2], leaderboard[11];
    int i;
    int contRondas, acumTrufas[2]={}, contLanzamientos[2]={}, acumTrufasRonda[2]={}, cantOinks[2]={}, maxLanza[2], totalpdv[2]={}, puntuaciones[11] = {};
    bool juegaPrimero, hundido=false, flagMax[2];
    flagMax[0]=false;
    flagMax[1]=false;

    for(i=0;i<11;i++)
    {
        leaderboard[i] = "N/N";
    }

    srand(time(NULL));

    cerditoCagando();

    menuPrincipal(nombres, acumTrufas, contRondas, contLanzamientos, acumTrufasRonda, juegaPrimero, hundido, cantOinks, maxLanza, totalpdv, flagMax, puntuaciones, leaderboard);

    system("pause>nul");
    return 0;
}
