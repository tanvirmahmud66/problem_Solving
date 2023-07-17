#include <bits/stdc++.h>

using namespace std;


//----------------Code_here-----------------
void solve() {
	
	string ts;
	cin>>ts;

	string hs[5];
	for(int i=0;i<5;i++){
		cin>>hs[i];
	}

	int flag=0;
	for(int i=0;i<5;i++){
		if(ts[0]==hs[i][0] || ts[1]==hs[i][1]){
			flag = 1;
			break;
		}
	}

	if(flag){
		cout<<"Yes";
	}else{
		cout<<"No";
	}

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
