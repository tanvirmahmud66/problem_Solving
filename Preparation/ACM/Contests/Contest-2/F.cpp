#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin>>s;
    int size = s.length();
    if(size>0 && size<100){
        int flag = 0;
        for(int i=0;i<size;i++){
            if(islower(s[i])){
                if(s[i]!=s[size-1-i]){
                    flag = 1;
                    break;
                }
            }else{
                return 0;
            }
        }

        if(flag==1){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
    }




}
