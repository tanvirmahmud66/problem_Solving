#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r[n],sum=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int f = min(x,y);
        int l = max(x,y);

        for(int j=(f+1);j<l;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        r[i]=sum;
        sum=0;

    }

    for(int i=0;i<n;i++){
        cout<<r[i]<<endl;
    }



    return 0;
}
