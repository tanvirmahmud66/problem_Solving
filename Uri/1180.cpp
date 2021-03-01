#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int x[n];
    int temp=0,in;

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    temp=x[0];
    for(int i=1;i<n;i++){
        if(x[i]<temp){
            temp=x[i];
        }
    }

    for(int i=0;i<n;i++){
        if(temp==x[i]){
            cout<<"Menor valor: "<<temp<<endl;
            cout<<"Posicao: "<<i<<endl;
        }
    }


    return 0;
}
