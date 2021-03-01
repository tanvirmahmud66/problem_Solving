#include<iostream>
using namespace std;

int main(){

    int n,l;
    while(cin>>n){
        int sp[n];
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>sp[i];
            if(temp<sp[i]){
                temp = sp[i];
            }
        }

        if(temp<10){
            l=1;
        }else if(temp>=10&&temp<20){
            l=2;
        }else if(temp>=20){
            l=3;
        }

        cout<<l<<endl;
    }


    return 0;
}
