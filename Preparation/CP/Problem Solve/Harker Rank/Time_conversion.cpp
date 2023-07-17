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
   
    int h,m,s;
    char ch;
    string str;

    cin>>h>>ch>>m>>ch>>s>>str;    

    if(str=="PM" && h!=12){
    	h+=12;
    }else if(str=="AM" && h==12){
    	h=0;
    }

    printf("%02d:%02d:%02d", h, m, s) ;


	return 0;
}	