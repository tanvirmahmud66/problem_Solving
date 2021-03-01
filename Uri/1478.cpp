#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;


    while(true){
        cin>>n;
        int a[n][n],val=0;

        if(n==0){
            return 0;
        }else{

            for(int i=0;i<n;i++){
                for(int j=i+val;j<n;j++){
                    a[i][j]=val+1;
                    a[j][i]=val+1;
                    ++val;
                }val=0;
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
