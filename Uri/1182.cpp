#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double m[12][12];

    int c,count=0;
    cin>>c;
    char ch;
    cin>>ch;
    double sum=0,avg=0;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(c==j){
                sum+=m[i][c];
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

