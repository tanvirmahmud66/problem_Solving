#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int first = 1;
    int second = 1;
    int fibo = 0;
    for(int i=3;i<=n;i++){
        fibo = first+second;
        first = second;
        second = fibo;
    }

    cout<<fibo<<endl;

    return 0;
}
