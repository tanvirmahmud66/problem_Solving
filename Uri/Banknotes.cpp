#include<iostream>
using namespace std;

int main(){

    int N,tk;
    cin>>N;
    cout<<N<<endl;

    for(int i=0;i<7;i++){

        if(i==0){
            tk=100;

        }else if(i==1){
            tk=50;

        }else if(i==2){
            tk=20;

        }else if(i==3){
            tk=10;

        }else if(i==4){
            tk=5;

        }else if(i==5){
            tk=2;

        }else if(i==6){
            tk=1;

        }
        int rest,note;
        if(N>=tk){
            note = N/tk;
            rest = N-(note*tk);

            cout<<note<<" nota(s) de R$ "<<tk<<",00"<<endl;

            N=rest;

        }else{
            note = 0;
            cout<<note<<" nota(s) de R$ "<<tk<<",00"<<endl;
        }


    }



    return 0;
}
