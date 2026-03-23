#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    int numh,numm,total;
    float totalh,totalm;
    cout<<"Dime el número de mujeres que hay: " ;
	cin>>numm;
	cout<<"Dime el número de hombres que hay: " ;
	cin>>numh; 
	total=numm+numh;
	cout<<"La cantidad de asistentes son: "<<total<<"\n";
	totalm=numm*100/total;
	totalh=numh*100/total;
	cout<<"Hombres:"<<totalh<<"%"<<"\n"<<"Mujeres:"<<totalm<<"%";
    return 0;
}