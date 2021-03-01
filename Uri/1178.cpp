#include<iostream>
#include<iomanip>
using namespace std;

int main(){


    double x;
    cin>>x;
    double n[100];
    n[0]=x;
    for(int i=1;i<100;i++){
        n[i]=n[i-1]/2;
    }

    for(int i=0;i<100;i++){
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<n[i]<<endl;
    }


    return 0;
}
