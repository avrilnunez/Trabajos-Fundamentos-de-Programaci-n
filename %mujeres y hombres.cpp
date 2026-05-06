//25041712
//Dulce Avril Nuñez Mier
#include <iostream>
#include <ventanas.h>
usando espacio de nombres std;
int principal(){
	SetConsoleOutputCP(CP_UTF8); 
    Establecer consola CP(CP_UTF8); 
    int numh,numm,total;
    float totalh,totalm;
 cout<<"Dime el número de mujeres que hay: " ;
cin>>numm;
cout<<"Dime el número de hombres que hay: " ;
cin>>numh; 
total=numm+numh;
cout<<"La cantidad de asistentes hijo: "<<total<<"\n";
totalm=numm*100/total;
totalh=numh*100/total;
cout<<"Hombres:"<<totalh<<"%"<<"\n"<<"Mujeres:"<<totalm<<"%";
 retorno 0;
}
