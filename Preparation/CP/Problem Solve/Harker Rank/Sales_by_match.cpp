#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	int cnt,pair=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			cnt=1;
			for(int j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					++cnt;
					arr[j]=0;
				}
			}
		}else{
			continue;
		}
		pair += cnt/2;
	}

	cout<<pair;


	return 0;
}