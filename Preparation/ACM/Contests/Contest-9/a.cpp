#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	LL 				long long
#define 	LF 				long float
#define 	LD 				long double


//----------------Code_here-----------------
void solve() {
	
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	int cnt=0;
	for(int i=0;i<n;++i){
		if(a[i]<=k){
			++cnt;
		}else{
			break;
		}
	}

	if(cnt!=n){
		for(int i=n-1;i>=0;i--){
			if(a[i]<=k){
				++cnt;
			}else{
				break;
			}
		}
	}

	cout<<cnt;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

}
