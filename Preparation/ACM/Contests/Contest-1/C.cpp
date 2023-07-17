#include<iostream>
#include<string>
using namespace std;

int main(){

    string a,b;
    cin>>a>>b;
    int count=0;
    int flag=1;
    if(a.length()== b.length()){
        for(int i=0;i<a.length();i++){
            for(int j=0;j<b.length();j++){
                if(a[i]!=b[i]){
                    for(int k=j+1;k<b.length();k++){
                        if(a[i]==b[k]){
                            swap(b[i],b[j+k]);
                        }
                    }
                }
            }

        }
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                flag=0;
            }
        }

        if(flag==0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }

    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
