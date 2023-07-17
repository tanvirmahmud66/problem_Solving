#include <bits/stdc++.h>

using namespace std;

//----------------Code_here-----------------
void solve() {
	
	int n,x;
	cin>>n>>x;

	int floor=0,apt=0;
	while(true){
		++floor;
		if(floor==1){
			apt+=2;
			if(n<=apt && n>=0){
				cout<<floor<<endl;
				break;
			}
		}else{
			int temp = apt;
			apt+=x;
			if(n<=apt && n>=temp){
				cout<<floor<<endl;
				break;
			}
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
