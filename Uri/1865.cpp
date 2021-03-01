#include<iostream>
#include<string>
using namespace std;

int main(){

    int n,t;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>t;

        if(s=="Thor"){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }


    return 0;
}
