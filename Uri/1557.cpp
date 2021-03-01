#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;
    while(true){
        cin>>n;
        int a[n][n],val=1,t=0,x=1,s=0,y=0;

        if(n<=0||n>15){
            break;
        }else{

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=val;
                    val*=2;

                    if(s<a[i][j])s=a[i][j];

                }
                x*=2;
                val=x;
            }

            while(s!=0){
                y=s%10;
                s=s/10;
                ++t;
            }


            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j==0){
                        cout<<setw(t)<<a[i][j];
                    }else{
                        cout<<" "<<setw(t)<<a[i][j];
                    }
                }cout<<endl;
            }cout<<endl;
        }

    }


    return 0;
}
