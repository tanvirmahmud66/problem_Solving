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

void solve(){
	LL N,Q;
	cin>>N;
	LL A[N];	
	fff(i,0,N){
		cin>>A[i];
	}

	cin>>Q;
	LL M[Q];
	fff(i,0,Q){
		cin>>M[i];
	}

	fff(i,0,Q){
		fff(j,0,N){
			A[j]%=M[i];
		}	
	}

	fff(i,0,N){
		
		if(i==N-1){
			cout<<A[i];
		}else{
			cout<<A[i]<<" ";
		}
	}cout<<endl;



}


//-------main---------
int main(){

	ios::sync_with_stdio(0);   
    cin.tie(0);   
   
    LL t=1;
    cin>>t;
    int count=0;
    while(t>0){
    	++count;
    	--t;
    	cout<<"Case "<<count<<":"<<endl;
    	solve();
    }


	return 0;
}	