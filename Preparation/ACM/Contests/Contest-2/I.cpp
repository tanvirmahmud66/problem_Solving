#include<iostream>
using namespace std;
int main(){
    int t,xi,yi;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>xi>>yi;
        int res = (xi+yi)/2;
        if(res%2==0){
            cout<<"Sadia will be happy."<<endl;
        }else{
            cout<<"Oops!"<<endl;
        }

    }


    return 0;
}
