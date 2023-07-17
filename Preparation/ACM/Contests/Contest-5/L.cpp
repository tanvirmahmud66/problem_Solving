#include<bits/stdc++.h>
using namespace std;

int relu(int val){
    if(val>=0){
        return val;
    }else if(val<0){
        return 0;
    }
}

int main(){
    int x;
    cin>>x;
    cout<<relu(x)<<endl;
}
