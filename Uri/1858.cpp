#include<iostream>
using namespace std;

int main()
{

    int n,small=0;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
        small=t[0];
    }

    for(int i=1;i<n;i++){
        if(small>t[i]){
            small=t[i];
        }
    }

    for(int i=0;i<n;i++){
        if(small==t[i]){
            cout<<i+1<<endl;
            break;
        }
    }


    return 0;
}
