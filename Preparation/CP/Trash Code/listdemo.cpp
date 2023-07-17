#include<bits/stdc++.h>
using namespace std;


int main(){


	list<pair<int,int>> l_p;

	int n;
	cin>>n;

	while(n--){
		int x,y;
		cin>>x>>y;
		l_p.push_back(make_pair(x,y));
	}	

	for(auto v: l_p){
		cout<<v.first<<" "<<v.second<<endl;
	}

	cout<<l_p.size()<<endl;

	// cout<<l_p.front().second<<endl;



	return 0;
}