#include<iostream>
using namespace std;

int main(){


    int n,x,sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum=0;
        for(int i=1;i<x;++i){
            if(x%i==0){
                sum+=i;
                if(sum>x){break;}
            }
        }
        if(sum==x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }


    return 0;
}
