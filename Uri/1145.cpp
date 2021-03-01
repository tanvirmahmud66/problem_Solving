#include<iostream>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;

    int temp,br=0;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }

    for(int i=1;i<=y;i++){
        ++br;
        if(br==x){
            cout<<i<<endl;
            br=0;
        }else{
            cout<<i<<" ";
        }
    }


    return 0;
}
