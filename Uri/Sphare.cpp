#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

    cout<<fixed;
    cout<<setprecision(3);

    float R; double pi=3.14159;
    cin>>R;
    double vol = (4.0/3)*pi*pow(R,3);
    cout<<"VOLUME = "<<vol<<endl;



    return 0;
}

