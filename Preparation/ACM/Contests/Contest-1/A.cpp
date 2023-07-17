#include<iostream>
using namespace std;

int main(){
    int y;
    bool leap;
    cin>>y;

    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                leap = true;
            }else{
                leap = false;
            }
        }else{
            leap = true;
        }
    }else{
        leap = false;
    }

    if(leap){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}
