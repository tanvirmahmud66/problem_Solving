#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int count=0,b=0;
    double m[12][12],sum=0,avg=0;
    char o;
    cin>>o;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
        }
    }

    for(int i=11;i>0;i--){
        ++b;
        for(int j=b;j<12;j++){
            sum+=m[i][j];
            ++count;
        }
    }


    if(o=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(o=='M'){
        cout<<fixed<<setprecision(1)<<sum/count<<endl;
    }


    return 0;
}



