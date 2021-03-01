#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a,count=0,sum=0;
    cin>>a;

    while(a>0){
        ++count;
        sum+=a;
        cin>>a;

    }

    cout<<fixed<<setprecision(2)<<(float)sum/count<<endl;


    return 0;
}
