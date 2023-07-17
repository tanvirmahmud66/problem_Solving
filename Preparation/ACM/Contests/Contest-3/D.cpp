#include<iostream>
using namespace std;

int main(){
    int k,a,b;
    cin>>k;
    cin>>a>>b;
    int mul=0;
    int i=1;
    int flag=0;
    while(true){
        mul = i*k;
        if(mul>=a && mul<=b){
            flag=1;
            break;
        }++i;

        if(mul>b){
            break;
        }
    }

    if(flag){
        cout<<"OK"<<endl;
    }else{
        cout<<"NG"<<endl;
    }
}
