#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int hour=0,rest;
    if(N>=3600){
        hour = N/3600;
        rest = N-(hour*3600);
        N=rest;
    }
    int mi = N/60;
    int sec = N-(mi*60);

    cout<<hour<<":"<<mi<<":"<<sec<<endl;

    return 0;
}
