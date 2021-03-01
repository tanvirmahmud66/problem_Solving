#include<iostream>
using namespace std;


int main(){

    int n;

    while(cin>>n){

        if(n%2!=0){
            int a[n][n];
        int l;
        l=n/3;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=0;
                if(i==j){
                    a[i][j]=2;
                }
                if(j==((n-1)-i)){
                    a[i][j]=3;
                }

                for(int k=l;k<n-l;k++){
                    for(int m=l;m<n-l;m++){
                        a[k][m]=1;
                    }
                }


            }
        }

        a[n/2][n/2]=4;





        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j];
            }cout<<endl;
        }cout<<endl;
        }


    }




    return 0;
}
