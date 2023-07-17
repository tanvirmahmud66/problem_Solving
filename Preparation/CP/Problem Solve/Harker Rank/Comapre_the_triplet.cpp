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
   
    
    int a[3],b[3];
    for(int i=0;i<3;i++){
    	cin>>a[i];
    }

    for(int i=0;i<3;i++){
    	cin>>b[i];
    }


   int bob=0,alice=0;

   fff(i,0,3){
   		if(a[i]>b[i]){++alice;}
   		if(a[i]<b[i]){++bob;}
   }

   cout<<alice<<" "<<bob;

	return 0;
}	