#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,s,d;
    cin>>n>>s>>d;
    long x[n],y[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]<s && y[i]>d){
            flag=1;
        }
    }

    if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;

}
