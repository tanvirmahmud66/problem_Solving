#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int tak=0,aok=0;

    for(int i=1;i<=n;i++){
        if(i%2==1){
            if(s[i-1]=='0'){
                continue;
            }else if(s[i-1]=='1'){
                tak=1;
                break;
            }
        }else{
            if(s[i-1]=='0'){
                continue;
            }else if(s[i-1]=='1'){
                aok=1;
                break;
            }
        }
    }

    if(tak==1){
        cout<<"Takahashi";
    }else if(aok==1){
        cout<<"Aoki";
    }

}
