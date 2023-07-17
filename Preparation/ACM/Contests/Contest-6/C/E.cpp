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

	LL t;
	cin>>t;
	LL a[t];
	fff(i,0,t){
		cin>>a[i];
	}
	LL odd=0,even=0,same=0;
	for(int i=0;i<t;i++){
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				if(j%2==0){
					++even;
				}else{
					++odd;
				}
			}
		}
	}

	if(odd>even){
		cout<<"Odd";
	}else if(odd==even){
		cout<<"Same";
	}else{
		cout<<"Even";
	}



	return 0;
}	