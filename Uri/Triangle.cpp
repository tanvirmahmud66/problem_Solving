#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a>0&&b>0&&c>0){

        if(a>=b+c){
            cout<<"NOA FORMA TRIANGULO"<<endl;
        }
        if(pow(a,2)==(pow(b,2)+pow(c,2))){
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(pow(a,2)>(pow(b,2)+pow(c,2))){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if(pow(a,2)<(pow(b,2)+pow(c,2))){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }




    }




    return 0;
}
