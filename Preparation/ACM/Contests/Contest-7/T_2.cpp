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
    int bonus;
    int remain;
    int all = n+1,drink = n; // all = 8+1 //drink = 8
    while(all>2){
    	bonus = all/3; // bonus = 3
    	drink += bonus; // 8+3 = 11
    	remain = all%3; // 0
    	all = bonus+remain; // 3+0
    }

    if(all>0){
    	cout<<drink;
    }


	return 0;
}	