#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);
    float personaA,personaB,personaC,dinerot,personaAT,personaBT,personaCT;
    cout<<"Dame la cantidad de dinero que obtuvieron: ";
    cin>>dinerot;
    //cout<<"Dame la persona que recibira el 40%: ";
    //cin>>personaA;
    //cout<<"Dame la persona que recibira el 35%: ";
    //cin>>personaB;
    //cout<<"Dame la persona que recibira el 25%: ";
    //cin>>personaC;
    personaAT=(dinerot/100)*40;
    personaBT=(dinerot/100)*35;
    personaCT=(dinerot/100)*25;
    cout<<"recibira $ "<<personaAT;
    cout<<"recibira $ "<<personaBT;
    cout<<"recibira $ "<<personaCT;
    return 0;       
}