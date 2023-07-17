#include<iostream>
#include <iomanip>
#define PI 3.141592653589793
using namespace std;

int main(){
    double area=0,r;
    cin>>r;
    area = PI * (r*r);
    cout<<fixed<<setprecision(10)<<area<<endl;
}
