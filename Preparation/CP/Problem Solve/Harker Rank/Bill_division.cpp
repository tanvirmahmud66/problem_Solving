#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k;
	cin>>n>>k;
	int bill[n];
	for(int i=0;i<n;++i){
		cin>>bill[i];
	}
	int b;
	cin>>b;
	int totbill = 0;
	for(int i=0;i<n;i++){
		if(i==k){
			continue;
		}else{
			totbill+=bill[i];
		}
	}

	int actual=0;
	actual = totbill/2;

	if(b==actual){
		cout<<"Bon Appetit";
	}else{
		cout<<(b-actual);
	}

	return 0;
}