#ifndef FUNCIONESG_H_INCLUDED
#define FUNCIONESG_H_INCLUDED

void mostrarCuadro(int);
void mostrarDado(int valorDado, int x, int y);
void quienPrimero(std::string nombres[], int jugador, std::string mensaje);
void mostrarInfo(std::string nombres[], int acumTrufas[], int contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero);
void acumulaTrufas(int suma);
void oink(int total);
void pierdeTrufas();
void hundeBarro();
void darTrufasAlRival();
void mostrarGanador(std::string nombres[],int acumTrufas[],int truf50[],int cantOinks[],int maxLanza[], int pdv[][4], int totalpdv[], int puntuaciones[], std::string leaderboard[]);
void mostrarEstadisticas(std::string leaderboard[], int puntuaciones[]);
void cerditos();
void chanchito();
void cerditoCagando();

#endif // FUNCIONESG_H_INCLUDED
