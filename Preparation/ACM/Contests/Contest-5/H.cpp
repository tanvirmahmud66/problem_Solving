#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long x[n],man=0,che=0;
    double euc=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        man+=abs(x[i]);
        euc+=pow(abs(x[i]),2);
        che = max(che,abs(x[i]));
    }
    euc = sqrt(euc);
    cout<<man<<endl<<fixed<<setprecision(15)<<euc<<endl<<che<<endl;


    return 0;
}
