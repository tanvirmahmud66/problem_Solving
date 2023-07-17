#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag = 0;
    for(int i=0;i<s.length();i++){
        if((i+1)%2==1){
            if(islower(s[i])){
                continue;
            }else{
                flag=1;
                break;
            }
        }else if((i+1)%2==0){
            if(isupper(s[i])){
                continue;
            }else{
                flag=1;
                break;
            }
        }
    }

    if(flag==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
