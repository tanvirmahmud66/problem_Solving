#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if((min(b,d)-max(a,c)+1)>=1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
