#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    for(int i=0;i<n;i++){

        if(a[i]==0){
            cout<<"NULL"<<endl;
        }
        else if(a[i]%2==0){
            if(a[i]<0){
                cout<<"EVEN NEGATIVE"<<endl;
            }else{
                cout<<"EVEN POSITIVE"<<endl;
            }
        }else{
            if(a[i]>0){
                cout<<"ODD POSITIVE"<<endl;
            }else{
                cout<<"ODD NEGATIVE"<<endl;
            }

        }

    }


    return 0;

}
