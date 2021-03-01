#include<iostream>
using namespace std;

int main(){

    int n,x,flag;
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>x;
        flag=0;
        for(int j=2;j<=x/2;j++){
            if(x%j==0){
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout<<x<<" eh primo"<<endl;
        }else{
            cout<<x<<" nao eh primo"<<endl;
        }



    }

    return 0;
}
