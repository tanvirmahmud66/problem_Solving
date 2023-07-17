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
   
    string s1,s2;
   	cin>>s1;
   	int count=0;
    for(int i=s1.size()-1;i>=0;--i){
    	++count;
    	if(count==3){
    		s2+=s1[i];
    		s2+=',';    		
    		count=0;
    	}else{
    		s2+=s1[i];
    	}
    }

    for(int i=s2.size()-1;i>=0;--i){
    	if(i==s2.size()-1 && s2[i]==','){
    		continue;
    	}
    	cout<<s2[i];

    }
   



	return 0;
}	