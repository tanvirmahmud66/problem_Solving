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
   
    int s,t,a,b,m,n,app=0,org=0;
    cin>>s>>t>>a>>b>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;++i){
    	cin>>apple[i];
    	int pos1 = a+apple[i];
    	if(pos1>=s && pos1<=t){
    		++app;
    	}

    }
    for(int i=0;i<n;++i){
    	cin>>orange[i];
    	int pos2 = b+orange[i];
    	if(pos2>=s && pos2<=t){
    		++org;
    	}
    }

    cout<<app<<endl<<org;

	return 0;
}	