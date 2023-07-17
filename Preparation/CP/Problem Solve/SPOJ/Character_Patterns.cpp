#include <bits/stdc++.h>

using namespace std;


//----------------Code_here-----------------
void solve() {
	
	int l,c;
	cin>>l>>c;

	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			
			if((i+j)%2==0){
				cout<<"*";
			}else{
				cout<<".";
			}
		}cout<<endl;
	}cout<<endl<<endl;

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
