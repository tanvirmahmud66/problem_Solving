#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin>>x;
    int rem = x%100;
    if(rem==0){
        cout<<100<<endl;
    }else{
        cout<<100-rem<<endl;
    }
    return 0;
}
