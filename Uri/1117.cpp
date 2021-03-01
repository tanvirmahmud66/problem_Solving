#include<iostream>
using namespace std;


int main(){

    float n;int i=0;
    float avg=0;
    while(true){

        cin>>n;
        if(n<0||n>10){
            cout<<"nota invalida"<<endl;
        }else if(n>=0||n<=10){
            ++i;
            avg += n;
            if(i==2) break;
        }


    }


    avg /=2;
    cout<<"media = "<<avg<<endl;


    return 0;
}
