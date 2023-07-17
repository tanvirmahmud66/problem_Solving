#include<iostream>
using namespace std;

int main(){
    int sum,num,fourth,value = 0;
    cin>>sum;

    for(int i=0;i<3;i++){
        cin>>num;
        value += num;
    }

    if(value<sum){
        fourth = sum-value;
        cout<<fourth<<endl;
    }

    return 0;
}
