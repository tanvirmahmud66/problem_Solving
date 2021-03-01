#include<iostream>
using namespace std;

int main(){

    int n[100],h,count=0;
    for(int i=0;i<100;i++){
        cin>>n[i];
    }

    h= max(n[0],n[1]);
    for(int i=2;i<100;i++){

        if(h<n[i]){
            h=n[i];
        }
    }

    cout<<h<<endl;

    for(int i=0;i<100;i++){
        ++count;
        if(n[i]==h){
            break;
        }
    }

    cout<<count<<endl;


    return 0;

}
