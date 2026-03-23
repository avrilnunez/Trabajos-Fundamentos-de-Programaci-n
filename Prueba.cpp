#include <iostream>//carga la libreria iostream
using namespace std;//establece el nombre del espacio std
int main()//Inicio del programa principal
{
		char cad[80];//Declara un arreglo de caracteres de 80 posiciones
		string cad2;//declara una variable string
		cout<<"Dame una cadena en un arreglo de caracteres (incluidos espacios)";
		gets(cad);//Lee un arregloo char por teclado
		cout<<"El arreglo es: "<<cad;//muestra un mensaje y el arreglo cad
		//printf("\nPresiona una tecla y continua automaticamente");
		//printf(" y con system no se requiere el letrero:\n);
		system("pause");//Detiene la ejecucion esperando una tecla
		cout<<"Dame una cadena de espacios ahora con cin: ";
		cin>>cad2;//Lee una variable string
		cout<<"\n La segunda cadena es: \""<<cad2<<"\" y no tiene espacios porque cin no sirve para ello: ";
		cout<<"\n De nuevo, dame una cadena de espacios usando getline: ";
		fflush(stdin);
		getline(cin, cad2);//Esta linea no dara problemas con los espacios en el nombre
		cout<<" La cadena es \""<<cad2<<"\" ya con espacios"<<"\n";
		//getline(cin,cad);//esto no funciona
		cout<<"El arreglo es "<<cad<<"\n";
return 0;
	}