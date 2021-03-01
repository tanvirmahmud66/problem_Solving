#include<iostream>
using namespace std;

int main(){

    int x,y,h=0;
    cin>>x>>y;



    h = y-x;

    if(h<0){
        h=24+(y-x);
    }

    if(x==y){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
        return 0;
    }else{
        cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<endl;
    }




    return 0;
}
