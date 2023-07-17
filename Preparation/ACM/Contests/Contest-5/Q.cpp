#include<bits/stdc++.h>
using namespace std;

int main(){
    char c1,c2,c3;
    cin>>c1>>c2>>c3;
    int flag=0;
    if(c1==c2){
        if(c2==c3){
            flag = 1;
        }
    }

    if(flag){
        cout<<"Won";
    }else{
        cout<<"Lost";
    }
}
