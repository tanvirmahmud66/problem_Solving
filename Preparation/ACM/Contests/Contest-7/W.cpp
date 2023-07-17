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
   	
   	LL k,n,m,x,y;

   	while(true){
   		cin>>k;
   		if(k==0){
   			break;
   		}else{
   			cin>>n>>m;
   			while(k!=0){

   				cin>>x>>y;

   				if(x==n || y==m){
   					cout<<"divisa"<<endl;
   				}else if(x>n & y>m){
   					cout<<"NE"<<endl;
   				}else if(x>n && y<m){
   					cout<<"SE"<<endl;
   				}else if(x<n & y>m){
   					cout<<"NO"<<endl;
   				}else if(x<n & y<m){
   					cout<<"SO"<<endl;
   				}

   				--k;
   			}
   		}
   	}
    

	return 0;
}	