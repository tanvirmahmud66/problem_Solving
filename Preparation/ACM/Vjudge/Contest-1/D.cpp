#include <bits/stdc++.h>

using namespace std;
//----------------Code_here-----------------
void solve() {
	
	int x,y;
	cin>>x>>y;
	int a,b;
	cin>>a>>b;
	int am=0;
	
	int d = abs(x-y);
	int m = min(x,y);
	int n = max(x,y);

	while(d--){
		--n;
		am+=a;
	}

	while(m!=0){
		--m;
		am+=b;
	}

	cout<<am<<endl;


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
