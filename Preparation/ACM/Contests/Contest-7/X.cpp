#include<bits/stdc++.h>
using namespace std;

//---------For Loop--------------
#define f(n)				for(LL i=0; i<n; ++i)
#define ff(from,to)			for(LL i=from; i<to; ++i)
#define fff(var,from,to) 	for(LL var=from; var<to; ++var)
#define ffff(var,from,to)	for(LL var = from-1; var>=to; --var)

//--------Variable---------------
typedef string s;
typedef long long LL;
typedef double D;
typedef long double LD;
typedef unsigned long long ULL;

//----------value-------
#define MAX 1000


//-------main---------
int main(){

	ios::sync_with_stdio(0);   
    cin.tie(0);   
   
    int t;
    cin>>t;
    ff(0,t){
    	int n;
    	cin>>n;
    	LL tap = n*567;
    	tap/=9;
    	tap+=7492;
    	tap*=235;
    	tap/=47;
    	tap-=498;

    	vector<int> v;
    	int digit;
    	while(tap!=0){
    		digit=abs(tap)%10;
    		tap/=10;
    		v.push_back(digit);
    	}

    	for(int i=0;i<v.size();i++){
    		if(i==1){
    			cout<<v[i]<<endl;
    		}
    	}
    	
    }



	return 0;
}	