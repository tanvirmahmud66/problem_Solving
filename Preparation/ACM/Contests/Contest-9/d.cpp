#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	LL 				long long
#define 	LF 				long float
#define 	LD 				long double



//----------------Code_here-----------------
void solve() {
	
	string s1,s2;
	cin>>s1>>s2;
	int cnt=0,res=0;
	if(s1.length()==s2.length()){
		for(int i=s1.length()-1;i>=0;i--){
			if(s1[i]==s2[i]){
				++cnt;
			}else{
				break;
			}
		}
	}else{
		if(s1.length()>s2.length()){
			int d = s1.length()-s2.length();
			for(int i=s1.length()-1;i>=0;i--){
				if(s1[i]==s2[i-d]){
					++cnt;
				}else{
					break;
				}
			}
		}else{
			int d = s2.length()-s1.length();
			for(int i=s2.length()-1;i>=0;i--){
				if(s2[i]==s1[i-d]){
					++cnt;
				}else{
					break;
				}
			}
		}
	}
	res = (s1.length()-cnt);
	res+= (s2.length()-cnt);

	cout<<res<<endl;

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
