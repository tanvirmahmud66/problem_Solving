#include<iostream>
#include<iomanip>
using namespace std;

int main(){


    char name[10];
    double salary,sold,bonus,total=0;

    cin>>name>>salary>>sold;
    cout<<fixed;
    cout<<setprecision(2);
    bonus=(15*sold)/100;
    total = salary+bonus;

    cout<<"TOTAL = R$ "<<total<<endl;





    return 0;
}
