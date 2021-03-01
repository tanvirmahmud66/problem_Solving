#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    long long a[61];
    a[0]=0;
    a[1]=1;

    for(int i=2;i<61;i++){
        a[i]=a[i-2]+a[i-1];
    }

    for(int i=0;i<t;i++){
        cin>>n;
        cout<<"Fib("<<n<<") = "<<a[n]<<endl;
    }


    return 0;
}
