#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float s=0;

    for(int i=1;i<=100;++i){
        s += ((float)1/i);
    }

    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}
