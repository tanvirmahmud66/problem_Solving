#include<iostream>
using namespace std;

int main(){

    int x,y,sum=0;
    cin>>x>>y;
    int st = min(x,y);
    int fn = max(x,y);

    for(int i=(st+1);i<fn;i++){
        if(i%2==1||i%2==-1){
            sum+=i;
        }
    }

    cout<<sum<<endl;




    return 0;
}
