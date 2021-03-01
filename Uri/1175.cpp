#include<iostream>
using namespace std;

int main()
{
    int s=20;
    int n[s],temp=0;

    for(int i=0;i<s;i++){
        cin>>n[i];
    }

    for(int i=0;i<(s-10);i++){
        temp=n[i];
        n[i]=n[19-i];
        n[19-i]=temp;

    }

    for(int i=0;i<s;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }


    return 0;
}
