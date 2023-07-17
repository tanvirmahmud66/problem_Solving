#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	LL 				long long
#define 	LF 				long float
#define 	LD 				long double



//----------------Code_here-----------------
void solve() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	vector<int> v;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==1 && i==0){
			++cnt;
		}else if(a[i]==1 && i!=0){
			++cnt;
			v.push_back(a[i-1]);
		}else if(a[i]==1 && i==n-1){
			++cnt;
			v.push_back(a[i-1]);			
			v.push_back(a[i]);			
		}else if(a[i]!=1 && i==n-1){
			v.push_back(a[i]);
		}
	}

	

	cout<<cnt<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
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
