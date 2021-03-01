#include<iostream>
using namespace std;

int main(){

    int a,b,c,i;
    double area;
    while(true){
        cin>>a;
        if(a==0){
            break;
        }
        cin>>b>>c;

        area = a*b*100.0/c;

        for(i=1;i*i<=area;i++);
        i--;
        cout<<i<<endl;
    }



    return 0;
}
