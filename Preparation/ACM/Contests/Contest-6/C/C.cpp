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

	LL n,count=0;
	cin>>n;
	set<LL>r;
	for(LL i=2;i*i<=n;++i){
		for(LL j=i*i;j<=n;j*=i){
			r.insert(j);
		}
	}

	cout<<n-(int)r.size()<<endl;

	return 0;
}	