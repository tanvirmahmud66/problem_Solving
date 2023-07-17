#include<iostream>
using namespace std;

int main(){
    long n,x;
    cin>>n>>x;
    long a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==x){
            ++count;
        }
    }

    long b[n-count],itr=0;
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            b[itr] = a[i];
            itr++;
        }
    }

    for(int i=0;i<n-count;i++){
        cout<<b[i]<<" ";
    }

}
