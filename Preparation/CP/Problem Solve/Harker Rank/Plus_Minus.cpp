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
   
    
    int n;
    cin>>n;
    int a[n];
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;++i){
    	cin>>a[i];
    	if(a[i]>0){
    		++pos;
    	}else if(a[i]<0){
    		++neg;
    	}else if(a[i]==0){
    		++zero;
    	}
    }

    cout<<setprecision(6)<<(double)pos/n<<endl;
    cout<<setprecision(6)<<(double)neg/n<<endl;
    cout<<setprecision(6)<<(double)zero/n;



	return 0;
}	