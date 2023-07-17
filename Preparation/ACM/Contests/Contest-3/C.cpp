#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N-1;i++){
        cin>>a[i];
    }

    int count,index=0,ans[N],x=0;
    for(int i=0;i<N-1;i++){
        if(x!=a[i]){
            x=a[i];
            for(int j=0;j<N-1;j++){
                if(x==a[j]){
                    ++count;
                }else{
                    continue;
                }
            }ans[index++]=count;
        }else{
            continue;
        }
    }

    for(int i=0;i<N;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
