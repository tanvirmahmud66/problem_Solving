#include<bits/stdc++.h>
using namespace std;

int main(){

    int d,t,s;
    cin>>d>>t>>s;

    double time = (double)d/s;
    if(time<=t){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
