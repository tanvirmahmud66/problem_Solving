#include<iostream>
using namespace std;

int main(){

    int t,a,b,sum=0;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b;

        if(a>=0&&a<=10&&b>=0&&b<=10){
            sum=a+b;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }


    return 0;
}
