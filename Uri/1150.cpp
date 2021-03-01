#include<iostream>
using namespace std;

int main(){
    int sum=0,count=0;
    int x,z;
    cin>>x>>z;

    while(x>=z){
        cin>>z;
    }

    while(sum<z){
        sum+=x;
        ++x;
        ++count;
    }

    cout<<count<<endl;


    return 0;
}
