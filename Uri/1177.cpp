#include<iostream>
using namespace std;

int main(){

    int t,m=0;
    cin>>t;

    int n[1000];
    for(int i=0;i<1000;i++){
        n[i]=m;
        ++m;
        if(m==t){
            m=0;
            continue;
        }
    }

    for(int i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }


    return 0;
}
