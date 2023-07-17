#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	ll 				long long
#define 	LF 				long float
#define 	LD 				long double



//----------------Code_here-----------------
void solve() {
	
	ll h;
	cin>>h;		
	ll h1=0,h2=0,h3=0;
	h2 = h/3;
	h1 = h3 = h2;
	if(h%3!=0){
		ll reminder = h%3;
		h2+=reminder;
		--h3;
		++h1;
		if(h1==h2){
			++h2;
			--h3;
			if(h3<1){
				--h1;
				++h3;
			}
		}
	}else{
		++h2;
		--h3;
	}

	cout<<h1<<" "<<h2<<" "<<h3<<endl;

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
