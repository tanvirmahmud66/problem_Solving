#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,t,s,d;
    cin>>v>>t>>s>>d;

    if((v*t)<=d && (v*s)>=d){
        cout<<"No";
    }else{
        cout<<"Yes";
    }

    return 0;

}
