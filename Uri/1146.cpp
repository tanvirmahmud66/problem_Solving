#include<iostream>
using namespace std;

int main(){

    int x;

    while(true){
        cin>>x;

        if(x==0){
            return 0;
        }else{
            for(int i=1;i<=x;i++){
                if(i==x){
                    cout<<i<<endl;
                }else{
                    cout<<i<<" ";
                }
            }
        }
    }


    return 0;
}
