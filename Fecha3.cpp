//25041712
//Dulce Avril Nuñez Mier
#include <ventanas.h>
#include <iostream>
usando espacio de nombres std;
int principal()

{
	SetConsoleOutputCP(CP_UTF8);
	Establecer consola CP(CP_UTF8);
	int d,m,a;
	cadena mes;
cout<<"Dame una fecha en este formato: ddmmaaaa";
	scanf("%20%26%4d", yd, ym, ya);
	si (m==1)
mes="Enero";
	else si (m==2)
mes=„Febrero";
de lo contrario si (m==3)
mes="Marzo";
de lo contrario si (m==4)
mes="Abril";
de lo contrario si (m==5)
mes="Mayo";
de lo contrario si (m==6)
mes=„Junio";
de lo contrario si (m==7)
mes=„Julio";
de lo contrario si (m==8)
mes=„Agosto";
de lo contrario si (m==9)
mes="Septiembre";
de lo contrario si (m==10)
mes="Octubre";
de lo contrario si (m==11)
mes="Noviembre";
de lo contrario si (m==12)
mes="Diciembre";
de lo contrario mes="Mes InvÁlido";
cout<<"La fecha es: "<<d<<"-"<<mes<<"-"<<a;
retorno 0;
}
