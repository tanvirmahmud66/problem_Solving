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
   
    int N,bonus,total=0,rest=0,count=0;
    cin>>N;
    total = N;
    while(N>2){
    	++count;
       	bonus = N/3;
       	total+=bonus;
    	rest = N-(bonus*3);
    	if(count == 1 && rest==2){
    		++rest;
    	}
    	N = bonus+rest;

    }

    
    	cout<<total<<endl;
    



	return 0;
}	