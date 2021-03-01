#include<iostream>
#include<iomanip>
using namespace std;


int main(){

    int n;
    cin>>n;
    double a,b,c,r[n];

    for(int i=0;i<n;i++){

        cin>>a>>b>>c;
        r[i]=((a*2)+(b*3)+(c*5.0))/(2+3+5);

    }

    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(1)<<r[i]<<endl;
    }


    return 0;

}
