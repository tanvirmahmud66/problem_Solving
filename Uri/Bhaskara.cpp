#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    double A,B,C;
    cin>>A>>B>>C;
    cout<<fixed;
    cout<<setprecision(5);

    double ele1 = pow(B,2)-(4*A*C);
    double ele2 = 2*A;


    if(ele1<0 || ele2==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        double R1 = (-B+sqrt(ele1))/ele2;
        double R2 = (-B-sqrt(ele1))/ele2;
        cout<<"R1 = "<<R1<<endl<<"R2 = "<<R2<<endl;
    }


    return 0;
}


