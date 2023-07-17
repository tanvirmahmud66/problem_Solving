#include<bits/stdc++.h>
using namespace std;


void show(vector<int> &v){
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}cout<<endl;
}


void arr(int arr[],int x){
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main(){

	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	for(int i=0;i<m;++i){
		cin>>b[i];
	}

	// arr(a,n);
	// arr(b,m);

	sort(a,a+n);
	sort(b,b+m);


	vector<int> v1;
	for(int i=1;i<=b[m-1];++i){
		v1.push_back(a[0]*i);						
	 }

	 //show(v1);


	vector<int> v2;
	for(int i=0;i<v1.size();i++){
		int ct=0;
		for(int j=0;j<n;j++){
			if(v1[i]%a[j]==0){
				++ct;
			}
		}
		if(ct==n){
			v2.push_back(v1[i]);
		}
	}

	//show(v2);

	vector<int> v3;
	int count=0;
	for(int i=0;i<v2.size();i++){
		int j;
		for(j=0;j<m;j++){
			if(b[j]%v2[i]==0){	
				++count;
			}
		}
		if(count==m){
			v3.push_back(v2[i]);
		}count=0;

	}

	//show(v3);

	cout<<v3.size();





	return 0;
}