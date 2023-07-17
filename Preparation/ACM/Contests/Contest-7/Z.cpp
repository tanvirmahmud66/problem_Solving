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

bool comp(int a, int b)
{
    return (a < b);
}



//-------main---------
int main(){

	ios::sync_with_stdio(0);   
    cin.tie(0);   
   
   	int t;
   	cin>>t;
   	int x,y,z,c=0;
   	ff(0,t){
   		cin>>x>>y>>z;
   		int mini = min({x,y,z},comp);
   		int maxi = max({x,y,z},comp);

   		if(x!=mini && x!=maxi){
   			++c;
   			cout<<"Case "<<c<<": "<<x<<endl;
   		}else if(y!=mini && y!=maxi){
   			++c;
   			cout<<"Case "<<c<<": "<<y<<endl;
   		}else if(z!=mini && z!=maxi){
   			++c;
   			cout<<"Case "<<c<<": "<<z<<endl;
   		}

   	}
    

	return 0;
}	