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

    for(int i=0;i<n;++i){
    	for(int j=0;j<n;++j){
    		if(j==(n-1-i)){
    			for(int k=j;k<n;k++){
    				cout<<"#";
    			}
    		}else{
    			cout<<" ";
    		}
    	}
    	if(i==n-1){
    		return 0;
    	}else{
    		cout<<endl;
    	}
    }


	return 0;
}	