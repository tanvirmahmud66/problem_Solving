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
   
    s str;
    cin>>str;
    int size = str.size();
    int flag = 1;
    for(int i=0;i<size;++i){
    	if(str[i]==str[size-1-i]){
    		continue;
    	}else{
    		flag = 0;
    	}
    }

    if(!flag){
    	cout<<"No"<<endl;
    }else{
    	cout<<"Yes"<<endl;
    }


	return 0;
}	