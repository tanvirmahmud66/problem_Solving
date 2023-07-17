#include<iostream>
using namespace std;

int main(){
    unsigned long long x,dep=100,per=0;
    cin>>x;
    int count=0;
    while(true){
        per = ((float) 1/100)*dep;
        dep+=per;
        ++count;
        if(dep==x || dep > x){
            break;
        }

    }

    cout<<count;

}
