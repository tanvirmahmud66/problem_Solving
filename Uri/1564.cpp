#include<iostream>
using namespace std;

int main(){

    int n;
    while(cin>>n){

        if(n<0&&n>100){
            break;
        }else{
            if(n==0){
                cout<<"vai ter copa!"<<endl;
            }else if(n>0){
                cout<<"vai ter duas!"<<endl;
            }
        }

    }


    return 0;
}
