#include<iostream>
using namespace std;

int main(){

    int s=0,t=0,l;
    int par[5],impar[5];
    int x;
    for(int i=0;i<15;i++){
        cin>>x;
        if(x%2==0){
            par[s]=x;
            ++s;
        }else{
            impar[t]=x;
            ++t;
        }

        if(s==5){
            l=0;
            while(l!=s){
                cout<<"par["<<l<<"] = "<<par[l]<<endl;
                ++l;
            }

            s=0;
        }

        if(t==5){
            l=0;
            while(l!=t){
                cout<<"impar["<<l<<"] = "<<impar[l]<<endl;
                ++l;
            }

            t=0;
        }

        if(i==14){
            l=0;
            while(l!=t){
                cout<<"impar["<<l<<"] = "<<impar[l]<<endl;
                ++l;
            }
            l=0;
            while(l!=s){
                cout<<"par["<<l<<"] = "<<par[l]<<endl;
                ++l;
            }
        }
    }

    return 0;
}
