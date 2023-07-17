#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,p,mid;
	cin>>n>>p;
	int s=0,e=0;
	
	//from start
	int x=0, y=0;
	for(int i=1;i<=n;i++){
		if(i==p){
			s = 0;
			break;
		}else{
			x+=2;
			y = x+1;
			if(x==p || y==p){
				s = i;
				break;
			}
		}
	}

	//from end
	int flip2=0;
	if(n%2!=0){
		if(n==p || (n-1)==p){
			e = 0;
		}else{
			y=n;
			for(int i=1;i<=n;i++){
				y-=2;
				x = y-1;
				if(x==p || y==p){
					e = i;
					break;
				}
			}
		}
	}else{
		if(n==p){
			e = 0;
		}else{
			x=n;
			for(int i=1;i<=n;i++){
				x-=2;
				y = x+1;
				if(x==p || y==p){
					e = i;
					break;
				}
			}
		}
	}


	
	if(s<e){
		cout<<s;
	}else if(s==e){
		cout<<s;
	}else{
		cout<<e;
	}
	

	return 0;
}