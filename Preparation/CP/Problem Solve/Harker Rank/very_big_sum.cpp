#include<bits/stdc++.h>
using namespace std;

//---------For Loop--------------
#define f(n)				for(LL i=0; i<n; ++i)
#define ff(from,to)			for(LL i=from; i<to; ++i)
#define fff(var,from,to) 	for(LL var=from; var<to; ++var)

//--------Variable---------------
typedef string s;
typedef long long LL;
typedef double D;
typedef long double LD;
typedef unsigned long long ULL;




//-------main---------
int main(){

	ios::sync_with_stdio(0);   
    cin.tie(0);   
   
    LL n;
   	cin>>n;
   	LL a[n],sum=0;
   	fff(i,0,n){
   		cin>>a[i];
   		sum+=a[i];
   	}

   	cout<<sum<<endl;

	return 0;
}	