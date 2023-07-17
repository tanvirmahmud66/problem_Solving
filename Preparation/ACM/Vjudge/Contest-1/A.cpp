#include <bits/stdc++.h>

using namespace std;


//----------------Code_here-----------------
void solve() {
	
	int n;
	cin>>n;
	int m = n*2;
	int a[m];

	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	int sp=0;
	for(int i=0;i<m;i++){
		if(a[i]==0){
			continue;
		}
		for(int j=1;j<m;j++){
			if(a[j]==0){
				continue;
			}
			if((a[i]+a[j])%2!=0){
				++sp;
				a[i]=0;
				a[j] =0;
			}
		}
	}

	if(sp==n){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

}
