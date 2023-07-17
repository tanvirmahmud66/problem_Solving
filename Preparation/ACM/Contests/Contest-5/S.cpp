#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    string s[2]={"Aoki","Takahashi"};
    if(c==0){
        cout<<s[a>b]<<endl;
    }else if(c==1){
        cout<<s[a>=b]<<endl;
    }
    return 0;
}
