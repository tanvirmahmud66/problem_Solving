#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int y;
	cin>>y;
	int pday = 243;
	if(y>1918){
		if(y%4==0){
			if(y%100==0){
				if(y%400==0){
					++pday;
				}
			}else{
				++pday;
			}
		}		
	}else if(y==1918){
		pday-=13;
	}else{
		if(y%4==0){
			++pday;
		}
	}

	cout<<256-pday<<"."<<"09"<<"."<<y;	

	return 0;
}