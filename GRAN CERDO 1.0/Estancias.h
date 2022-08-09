#ifndef ESTANCIAS_H_INCLUDED
#define ESTANCIAS_H_INCLUDED

void menuPrincipal(std::string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], int totalpdv[], bool flagMax[2], int puntuaciones[], std::string leaderboard[]);
void tiraPrimero(std::string nombre[], bool &juegaPrimero);
void ronda(std::string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], bool flagMax[2]);
void quienGana(std::string nombres[], int totalpdv[], int acumTrufas[], int cantOinks[], int maxLanza[], int puntuaciones[], std::string leaderboard[]);

#endif // ESTANCIAS_H_INCLUDED
