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

//--------Binary Search-----------
bool bs(LL arr[], LL size, LL target){
	LL left=0,right=size-1,mid;
	while(left<=right){
		mid = (left+right)/2;
		if(arr[mid]==target){
			return true;
		}
		if(target<arr[mid]){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return false;
}

//---------linear Search------------
bool ls(LL arr[], LL size, LL target){
	fff(i,0,size){
		if(arr[i]==target){
			return true;
		}
	}
	return false;
}


//-------------------------------Solve----------------------
void solve(){

	

}


//-------main---------
int main(){

	/*ios::sync_with_stdio(0);   
    cin.tie(0);   
   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);   
    #endif */ 

	LL t=1;
	cin>>t;
	while(t--){
		LL n,odd=0,even=0;
		cin>>n;
		fff(i,1,n+1){
			if(n%i==0){
				if(i%2==0){
					++even;
				}else{
					++odd;
				}
			}
		}

		if(odd>even){
			cout<<"Odd"<<endl;		
		}else if(odd = even){
			cout<<"Same"<<endl;
		}else{
			cout<<"Even"<<endl;
		}
	}

	
	return 0;
}	