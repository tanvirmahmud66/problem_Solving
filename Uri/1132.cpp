#include<iostream>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;
    int temp;

    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }


    int sum=0;
    for(int i=x;i<=y;i++){

        if(i%13!=0){
            sum+=i;
        }

    }

    cout<<sum<<endl;

    return 0;
}
