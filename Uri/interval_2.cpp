#include<iostream>
using namespace std;

int main(){

    int n,x=0,y=0,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=10 && a<=20){
            ++x;
        }else{
            ++y;
        }
    }

    cout<<x<<" in"<<endl<<y<<" out"<<endl;

    return 0;
}
