#include<iostream>
using namespace std;

int main(){

    int t,a=0,b=0,count=0;
    cin>>t;
    int n[t];

    if(t<=25){
        for(int i=0;i<t;i++){
            cin>>n[i];
        }

        for(int i=0;i<t;i++){
            b=n[i];
            for(int j=0;j<i;j++){
                if(n[j]==n[i]){
                    a=n[i]-(n[i]-(count+1));
                    b=n[i]-(count+1);
                    ++count;
                    if(a==b){
                        ++a;
                        --b;
                    }
                    if(a>10||b>10){
                        return 0;
                    }

                }
            }count=0;

            cout<<a<<" "<<b<<endl;
            a=0;b=0;
        }

    }


    return 0;
}
