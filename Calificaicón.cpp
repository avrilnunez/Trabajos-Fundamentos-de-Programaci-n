#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    int rc,ri,rb,cf,rt,cf1;
    cout<<"Las respuestas corresctas valen 5 puntos c/u\n";
    cout<<"Las respuestas incorrectas restan 1 punto c/u\n";
    cout<<"Las respuestas en blanco valen 0 puntos c/y\n";
    cout<<"Dame las respuestas que obtuvo correctas: ";
    cin>>rc;
    cout<<"Dame las respuestas que obtuvo incorrectas: ";
    cin>>ri;
    cout<<"Dame las respuestas que estan en blanco: ";
    cin>>rb;
    rt=rc+ri+rb;
    cf=(rc*5)-ri;
    cf1=(cf * 100.0)/(rt*5);
    cout<<"La calificación final es: "<<cf1;
	return 0;
}