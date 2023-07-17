#include<bits/stdc++.h>
using namespace std;

int main(){

	list<int> L;
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	int x;
	// 	cin>>x;
	// 	L.push_back(x);
	// }


	// for(list<int>::iterator it = L.begin();it!=L.end();++it){
	// 	cout<<*it<<" ";
	// }


	int x;
	while(cin>>x){
		L.push_front(x);
	}

	for(auto it = L.begin();it!=L.end();++it){
		cout<<*it<<" ";
	}


	return 0;
}