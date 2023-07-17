#include<bits/stdc++.h>
using namespace std;

void arrayshow(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

int main(){
	
	int b,n,m;
	cin>>b>>n>>m;

	int k[n];
	int d[m];

	for(int i=0;i<n;++i){
		cin>>k[i];
	}
	for(int j=0;j<m;j++){
		cin>>d[j];
	}

	//arrayshow(k,n);
	int temp=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int sum = k[i]+d[j];
			if(temp<sum && sum<=b){
				temp = sum;
			}
		}
	}

	if(temp!=0){
		cout<<temp;
	}else{
		cout<<-1;
	}


	return 0;
}