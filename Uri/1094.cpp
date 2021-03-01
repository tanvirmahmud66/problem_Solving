#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    int am,t=0,c=0,r=0,s=0;
    char ch;

    for(int i=0;i<n;i++){

        cin>>am;
        cin>>ch;

        t+=am;

        if(ch=='C') c+=am;
        if(ch=='R') r+=am;
        if(ch=='S') s+=am;


    }

    cout<<"Total: "<<t<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<((float)c/t)*100.00<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<((float)r/t)*100.00<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<((float)s/t)*100.00<<" %"<<endl;


    return 0;
}
