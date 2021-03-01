#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int n[10];
    n[0]=x;
    for(int i=1;i<10;i++){
        n[i]=n[i-1]*2;
    }

    for(int i=0;i<10;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}
