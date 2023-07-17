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
    int a[n][n];

    for(int r=0;r<n;++r){
    	for(int c=0;c<n;++c){
    		cin>>a[r][c];
    	}
    }

    LL sumA = 0,sumB = 0;
    for(int i=0;i<n;++i){
    	for(int j=0;j<n;++j){
    		if(i==j){
    			sumA+=a[i][j];
    		}
       	}
	   
	   	for(int j=0;j<n;++j){
	   		if((i+j)==(n-1)){
	   			sumB+=a[i][j];
	   		}
	   	}	    
    }

    cout<<abs(sumA-sumB);



	return 0;
}	