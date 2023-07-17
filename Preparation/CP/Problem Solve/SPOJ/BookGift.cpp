#include <bits/stdc++.h>

using namespace std;

//----------------Code_here-----------------
void solve() {
	
	int m,n;
	cin>>m>>n;

	if(n%m==0){
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
