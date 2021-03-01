#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double m[12][12];

    int n,count=0;
    cin>>n;
    char ch;
    cin>>ch;
    double sum=0,avg=0;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<12;i++){
        if(i==n){
            for(int j=0;j<12;j++){
                sum+=m[n][j];
                ++count;
            }
        }
    }


    if(ch=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(ch=='M'){
        cout<<fixed<<setprecision(1)<<sum/count<<endl;
    }



    return 0;
}
