//25041712
//Dulce Avril Nuñez Mier
#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	//fulanito
	//nc tal
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char equipo [30];
	int jj,jg,je, jp, puntos, pd;
	float pct;
	cout<<"Dime el nombre del equipo: ";
	gets (equipo);
	cout<<"¿Cuántos partidos ganó?: ";
	cin>>jg;
	cout<<"¿Cuántos partidos perdió?: ";
	cin>>jp;
	cout<<"¿Cuántos partidos empató?: ";
	cin>>je;
	jj=jg+je+jp;
	puntos=(jg*3)+je;
	pd=jj*3;
	pct=puntos*100/pd;
	cout<<"El equipo "<<equipo<<" ganó "<<jg<<" partidos, empató "<<je<<" y perdió "<<jp;
	cout<<"\nObtuvo "<<puntos<<" puntos de "<<pd<<" puntos disponibles";
	cout<<"\nEl total de partidos es: "<<jj;
	printf("\nEl porcentaje de efectividad fue de %2.2f", pct);
	cout<<" %";
	return 0;
}
