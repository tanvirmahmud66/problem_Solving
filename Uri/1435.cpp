#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;


    while(true){
        cin>>n;
        int a[n][n],l=0,x,y;
        l=n/2;
        if(n%2==1)l++;
        x=0;
        y=n-1;
        if(n==0){
            return 0;
        }else{
            for(int k=1;k<=l;k++){
                for(int i=x;i<=y;i++){
                    for(int j=x;j<=y;j++){
                        a[i][j]=k;
                    }
                }x++;y--;
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j==0){
                        cout<<setw(3)<<a[i][j];
                    }else{
                        cout<<" "<<setw(3)<<a[i][j];
                    }
                }cout<<endl;
            }cout<<endl;
        }
    }


    return 0;
}
