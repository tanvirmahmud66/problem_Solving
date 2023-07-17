#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int score[n];
	for(int i=0;i<n;i++){
		cin>>score[i];
	}

	
	int lcnt=0,hcnt=0;
	int hi[n],lo[n];
	hi[0] = lo[0] = score[0];
	for(int i=1;i<n;i++){
		if(score[i]<score[i-1]){
			if(score[i]<lo[i-1]){
				lo[i] = score[i];
				hi[i] = hi[i-1];
				++lcnt;
			}else{
				hi[i] = hi[i-1];
				lo[i] = lo[i-1];
			}
		}else{
			if(score[i]>hi[i-1]){
				hi[i] = score[i];
				lo[i] = lo[i-1];
				++hcnt;
			}else if(score[i]<=hi[i-1]){
				hi[i] = hi[i-1];
				lo[i] = lo[i-1];
			}
		}
	}

	int ans[2] = {hcnt,lcnt};
	for(int i=0;i<2;++i){
		cout<<ans[i]<<" ";
	}


	return 0;
}