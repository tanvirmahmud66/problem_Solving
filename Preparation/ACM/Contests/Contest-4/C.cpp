#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count=0,itr=1;
    for(int i=0;i<n;i++){
        int x=i;
        if(a[i]==a[x]){
            continue;
        }else{
            ++itr;
        }
    }

    cout<<itr;


}
