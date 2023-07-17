#include<bits/stdc++.h>
using namespace std;

typedef long int L;
typedef long long LL;
typedef double D;
typedef string S;


int main(){

	L n;
	cin>>n;
	LL a[n],p[n],x[n],yen=0;

	for(LL i=0;i<n;++i){
		cin>>a[i]>>p[i]>>x[i];
	}
	
	for(LL i=0;i<n;++i){
		if((x[i]-a[i])>0){
			if(yen==0){
				yen=p[i];
			}else{
				yen = min(yen,p[i]);
			}
		}
	}

	if(yen){
		cout<<yen<<endl;
	}else{
		cout<<-1<<endl;		
	}

	return 0;
}