#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,M;
    cin>>N>>M;
    int arr[M];

    for(int i=0;i<M;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<M;i++){
        sum+=arr[i];
    }

    if(sum>N){
        cout<<-1<<endl;
    }else{
        cout<<N-sum<<endl;
    }

    return 0;
}
