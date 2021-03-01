#include<iostream>
#include<iomanip>
using namespace std;

int main(){


    int X;
    double Y;
    cin>>X>>Y;

    cout<<fixed;
    cout<<setprecision(3);

    double spent_fuel = X/Y;
    cout<<spent_fuel<<" km/l"<<endl;




    return 0;
}

