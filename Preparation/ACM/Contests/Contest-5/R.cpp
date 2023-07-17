#include<iostream>
using namespace std;

int main(){

    long n,x,v,p,liq=0;
    cin>>n>>x;
    x*=100;
    for(int i=0;i<n;i++){
        cin>>v>>p;
        if((v*p)>x){
            cout<<i+1<<endl;
            return 0;
        }x-=(v*p);
    }

    cout<<-1<<endl;

    return 0;
}
