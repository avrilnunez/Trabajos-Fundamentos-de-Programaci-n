#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    //Dulce Avril Nuñez Mier
    //25041712
    char equipo[50];
    int ganados, empatados, perdidos, jugados, puntos;
    float efectividad;
    cout<<"Dame el nombre del equipo: ";
    cin.getline(equipo,50);
    cout<<"Dame los juegos ganados: ";
    cin>>ganados;
    cout<<"Dame los juegos empatados: ";
    cin>>empatados;
    cout<<"Dame los juegos perdidos: ";
    cin>>perdidos;
    jugados = ganados + empatados + perdidos;
    puntos = (ganados*3) + (empatados*1) + (perdidos*0);
    efectividad = (puntos / 90.0) * 100;
    cout<<"Equipo: "<<equipo<<"\n";
    cout<<"Partidos jugados: "<<jugados<<"\n";
    cout<<"Puntos obtenidos: "<<puntos<<"\n";
    cout<<"Con un total de 90 puntos disputados el porcentaje obtenido por el equipo "<<equipo<<" es "<<efectividad<<" %";
    return 0;
}