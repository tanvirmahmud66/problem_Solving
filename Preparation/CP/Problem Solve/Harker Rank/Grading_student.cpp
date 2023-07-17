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
    int grade[n];
    for(int i=0;i<n;++i){
    	cin>>grade[i];
    }

    for(int i=0;i<n;++i){    	
    	if(grade[i]%5!=0){
    		int temp=0,j=0;
    		while(temp<grade[i]){
    			++j;
    			temp=(5*j);
    		}
    		if((temp-grade[i])<3 && temp>=40){
    			grade[i]=temp;
    		}
    	}
    }


    for(int i=0;i<n;++i){
    	cout<<grade[i]<<endl;
    }

	return 0;
}	