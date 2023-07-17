#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	char ud[n];
	for(int i=0;i<n;i++)	
		cin>>ud[i];

	int seaLev = 0;
	int m = seaLev;

	int count=0,flag=1,flag2=0;
	for(int i=0;i<n;i++){
		if(ud[i]=='U'){
			++m;
		}else if(ud[i]=='D'){
			--m;
		}

		if(m<seaLev && flag){     // 1  1			
			flag2 = 1;
		}

		if(m>=seaLev && flag2){  //  0  1
			++count;
			flag2=0;
		}

	}

	cout<<count;


	return 0;
}