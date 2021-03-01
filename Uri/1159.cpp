#include<iostream>
using namespace std;

int main(){


    int x;

    int sum=0,count=0;

    while(true){
        cin>>x;
        if(x!=0){
        while(count!=5){
            if(x%2==0){
                sum+=x;
                x+=2;
                ++count;
            }else{
                ++x;
            }
        }
        cout<<sum<<endl;
        sum=0;
        count=0;}else{
            break;
        }
    }


    return 0;
}
