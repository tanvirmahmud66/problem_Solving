#include<iostream>
using namespace std;

int main(){

    int n,x,y;
    cin>>n;
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        while(count!=y){
            if(x%2!=0){
                sum+=x;
                x+=2;
                ++count;
            }else{
                ++x;
            }
        }

        cout<<sum<<endl;

        count=0;
        sum=0;


    }




    return 0;
}
