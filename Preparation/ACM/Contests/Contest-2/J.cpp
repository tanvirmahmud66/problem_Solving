#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int one=0,b=a;
    while(b!=0){
        int x = b%2;
        b=b/2;
        if(x==1){
            ++one;
        }
    }

    int number=1;
    int final_res=a;
    while(number!=a){
        int num = number;
        int count=0;
        for(int i=0;num>0;i++){
            int y=num%2;
            num = num/2;
            if(y==1){
                ++count;
            }
        }
        int res=0;
        if(count==one){
            res = number;
            if(final_res>res){
                final_res = res;
            }
        }

        ++number;
    }

    cout<<final_res<<endl;

}
