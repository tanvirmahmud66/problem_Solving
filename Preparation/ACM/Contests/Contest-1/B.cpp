#include<iostream>
using namespace std;

int  main(){

    int n;
    cin>>n;
    int middle = n/2,flag=0;
    for(int i=2;i<=middle;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
