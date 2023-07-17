#include<bits/stdc++.h>
using namespace std;

typedef long int L;
typedef long long LL;
typedef double D;
typedef string S;


int main(){

	L a,b;
	D c, percent;	
	cin>>a>>b;

	percent = ((double)(a-b)/a)*100;
	std::cout << std::setprecision(20);
	cout<<percent<<endl;

	return 0;
}