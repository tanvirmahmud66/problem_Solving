#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x!=y){

        int small=0,big=0;
        small = min(x,y);
        big=max(x,y);
        small+=3;

        if(small>big){
            cout<<"Yes";
        }else{
            cout<<"No";
        }

    }
}
