#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4],m;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    m=a[0];
    for(int i=1;i<4;i++){
        m=min(m,a[i]);
    }

    cout<<m;
}
