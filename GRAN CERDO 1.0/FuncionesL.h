#ifndef FUNCIONESL_H_INCLUDED
#define FUNCIONESL_H_INCLUDED

void ingresarNombres(std::string nombres[]);
int azarDado();
int funcionDadoMayor(int d1, int d2);
void tirarDado(int x[], int y[], bool estancia);
void turno(std::string nombres[], int acumTrufas[], int &contRondas, int contLanzamientos[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[], int maxLanza[], bool flagMax[2]);
bool lanzamiento(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero, bool &hundido, int cantOinks[]);
void acumulaTrufas(int acumTrufasRonda[], bool juegaPrimero, int dados[], int cantDados);
void oink(int acumTrufasRonda[], bool juegaPrimero, int dados[], int cantDados);
void pierdeTrufas(int acumTrufasRonda[], bool juegaPrimero);
void hundeBarro(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero);
void darTrufasAlRival(int acumTrufas[], int acumTrufasRonda[], bool juegaPrimero);
void estadisticas(std::string leaderboard[], std::string nombres, int puntuaciones[], int totalpdv);
void reacomodo(int pos, int puntuaciones[],int totalpdv, std::string leaderboard[], std::string nombres);


#endif // FUNCIONESL_H_INCLUDED
