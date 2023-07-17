#include<iostream>
using namespace std;

int main(){

    int n,value,highest=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value>highest){
            highest = value;
        }
    }

    cout<<highest<<endl;
    return 0;
}
