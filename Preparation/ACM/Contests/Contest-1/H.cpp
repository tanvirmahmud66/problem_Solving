#include<iostream>
#include<string>
using namespace std;

int main(){

    int n,count,big=0;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i][0]=='b'){
            count=0;
            for(int j=1;j<str[i].length();j++){
                if(str[i][j]=='a'){
                    ++count;
                }
            }
            if(count%2!=0 && count>1){
                str[i].resize(str[i].size()-1);
            }else if(count==1){
                char ch = 'a';
                str[i].push_back(ch);
            }
        }
        if(big<str[i].length()){
            big = str[i].length();
        }
    }

    big = (big/2)+1;

    for(int i=0;i<n;i++){
        int x = (str[i].length()/2)+1;
        for(int j=0;j<(big-x);j++){
            str[i] = " "+str[i];
        }cout<<str[i]<<endl;
    }



    return 0;
}
