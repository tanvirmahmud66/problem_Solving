#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        if(y!=0){
            float div = (float)x/y;
            cout<<fixed<<setprecision(1)<<div<<endl;
        }else{
            cout<<"divisao impossivel"<<endl;
        }

    }



    return 0;
}
