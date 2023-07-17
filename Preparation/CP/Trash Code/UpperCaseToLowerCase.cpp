#include<bits/stdc++.h>
using namespace std;


int main(){

	string name;
	cin>>name;


	for(int i=0;i<name.length();++i){
		name[i] = name[i]+'a'-'A';
		cout<<name[i];
	}


	return 0;
}