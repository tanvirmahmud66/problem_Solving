#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int h,s,milage=12;
    cin>>h>>s;
    cout<<fixed;
    cout<<setprecision(3);


    double litter = (double)(h*s)/milage;
    cout<<litter<<endl;


    return 0;
}
