#include<iostream>
using namespace std;

int main(){

    bool b=true;
    int m,n;
    int sum=0;
    while(b){
        cin>>m>>n;
        if(m<=0||n<=0){
            break;
        }

        int f,l;
        f=min(m,n);
        l=max(m,n);

        for(int i=f;i<=l;i++){
            sum+=i;
            cout<<i<<" ";
        }cout<<"Sum="<<sum<<endl;
        sum=0;
    }




    return 0;
}
