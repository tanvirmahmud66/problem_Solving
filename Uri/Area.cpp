#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    cout<<fixed;
    cout<<setprecision(3);
    double A,B,C,pi=3.14159;
    cin>>A>>B>>C;

    double tra = .5*A*C;
    cout<<"TRIANGULO: "<<tra<<endl;

    double  rad = pi*(C*C);
    cout<<"CIRCULO: "<<rad<<endl;

    double trap = .5*(A+B)*C;
    cout<<"TRAPEZIO: "<<trap<<endl;

    double squ = B*B;
    cout<<"QUADRADO: "<<squ<<endl;

    double rec = A*B;
    cout<<"RETANGULO: "<<rec<<endl;


    return 0;
}

