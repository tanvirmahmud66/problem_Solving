#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long a[n],b[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<n;i++){
        sum+=(b[i]*(b[i]+1)-a[i]*(a[i]-1))/2;
    }

    cout<<sum;

    return 0;
}
