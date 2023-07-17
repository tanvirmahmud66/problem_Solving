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
   
    
    LL a[5],mini = 0,maxi=0,same=0;
    for(int i=0;i<5;i++){
    	cin>>a[i];
    }
    same = a[0];
    maxi = a[0];
    mini = a[0];
    LL temp = 0;
    for(int i=0;i<5;i++){
    	if(mini>a[i]){
    		mini = a[i];
    	}

    	if(maxi<a[i]){
    		maxi = a[i];
    	}

    	if(a[i]==a[i+1]){
    		temp = a[i+1];
    	}

    }


    LL minSum = 0, maxSum=0,all=0;

    if(temp==same){
    	for(int i=0;i<4;++i){
    		all += a[i];
    	}

    	cout<<all<<" "<<all;
    	return 0;
    }

    for(int i=0;i<5;i++){
    	if(a[i]==maxi){
    		continue;
    	}else{
    		minSum+=a[i];
    	}
    }

    for(int i=0;i<5;i++){
    	if(a[i]==mini){
    		continue;
    	}else{
    		maxSum+=a[i];
    	}
    }

    cout<< minSum <<" "<< maxSum<<endl;

}	