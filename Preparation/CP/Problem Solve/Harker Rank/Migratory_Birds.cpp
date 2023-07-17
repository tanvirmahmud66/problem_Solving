#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int count=0,temp=0,mx=0;
	for(int i=1;i<=5;++i){
		int j;
		for(j=0;j<n;j++){
			if(a[j]==i){
				++count;
			}
		}

		if(i==1){
			mx = i;
			temp=count;
		}

		if(count>temp){
			mx = i;
			temp = count;
		}count=0;

	}

	cout<<mx;
	

	return 0;
}