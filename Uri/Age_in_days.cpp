#include<iostream>
using namespace std;

int main(){

    int day,year=0,month;
    cin>>day;

    if(day>=365){
        year = day/365;
        int rest = day-(year*365);
        day = rest;
    }
    if(day>=30){
        month = day/30;
        int rest = day-(month*30);
        day = rest;
    }

    cout<<year<<" ano(s)"<<endl<<month<<" mes(es)"<<endl<<day<<" dia(s)"<<endl;




    return 0;
}
