#include<iostream>
using namespace std;

int main(){

    int s=0,t=0;
    int par[5],impar[5];
    int a[5],u=0;
    int x;
    for(int i=0;i<15;i++){
        cin>>x;
        if(i<10){
            if(x%2==0){
                par[s]=x;
                ++s;
            }else{
                impar[t]=x;
                ++t;
            }
        }else if(i>=10){
            a[u]=x;
            ++u;
        }

    }s=0;t=0;

    for(int i=0;i<5;i++){
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
        par[i]=0;
    }

    for(int i=0;i<5;i++){
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
        impar[i]=0;
    }

    for(int i=0;i<5;++i){
        if(a[i]%2!=0){
            impar[t]=a[i];
            ++t;
        }else{
            par[s]=a[i];
            ++s;
        }
    }

    for(int i=0;i<t;i++){
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;

    }

    for(int i=0;i<s;i++){
        cout<<"par["<<i<<"] = "<<par[i]<<endl;

    }





    return 0;
}

