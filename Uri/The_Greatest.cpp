#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    int n = ((x+y)+abs(x-y))/2;
    int m = ((n+z)+abs(n-z))/2;
    cout<<m<<" eh o maior"<<endl;




    return 0;
}

