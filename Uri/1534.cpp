#include<iostream>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        int x=1;

        int a[n][n];

        if(n<3||n>=70){
            break;
        }else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        a[i][j]=1;
                    }else{
                        a[i][j]=3;
                    }

                    if(j==(n-x)){
                        a[i][j]=2;
                    }
                }
                ++x;
            }


            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j];
                }cout<<endl;
            }
        }

    }


    return 0;
}
