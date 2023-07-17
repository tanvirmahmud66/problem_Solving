#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	LL 				long long
#define 	LF 				long float
#define 	LD 				long double



//----------------Code_here-----------------
void solve() {
	
	LL n=0,k=0, cnt=0, b_c=0;
	cin>>n>>k;
	char a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	for(int i = 0; i<n ; ++i){
		if(a[i]=='W'){
			++cnt;
			++b_c;
		}else if(a[i]=='B'){
			++b_c;
		}

		if(b_c==k){
			cout<<cnt<<endl;
			break;
		}
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
