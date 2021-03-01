#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double s=0,b=1;

    for(int i=1;i<=39;i+=2){
        s+=(double)i/b;
        b*=2;
    }

    cout<<fixed<<setprecision(2)<<s<<endl;



    return 0;
}
