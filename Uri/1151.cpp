#include<iostream>
using namespace std;

int main(){

    int n,n3=0;
    cin>>n;
    int n1=0,n2=1;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<n;++i){
        n3=n1+n2;

        if(i==(n-1)){
            cout<<n3<<endl;
        }else{
            cout<<n3<<" ";
        }

        n1=n2;
        n2=n3;
    }

    return 0;
}
