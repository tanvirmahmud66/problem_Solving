#include<bits/stdc++.h>
using namespace std;

int f(int n){
    string s1,s2;
    int num1,num2;
    s1=to_string(n);
    s2 = to_string(n);
    sort(s1.rbegin(),s1.rend());
    sort(s2.begin(),s2.end());
    num1 = stoi(s1);
    num2 = stoi(s2);
    return num1-num2;
}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        n=f(n);
    }
    cout<<n<<endl;
    return 0;
}
