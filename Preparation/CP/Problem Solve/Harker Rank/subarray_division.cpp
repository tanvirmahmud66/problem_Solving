#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,d,m;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>d>>m;
	int count=0;
	int sum=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;j++){
			sum += s[i+j];
		}
		if(sum == d){
			++count;
		}sum=0;
	}

	cout<<count;

	return 0;
}