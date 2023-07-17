#include <bits/stdc++.h>

using namespace std;

#define L long
#define LL long long
#define LF long float
#define LD long double
#define scI(t) scanf("%d",&t)
#define scLI(t) scanf("%ld",&t)
#define scLLI(t) scanf("%lld",&t)
#define scLD(t) scanf("%lf",&t)
#define scCh(t) scanf("%c",&t)
#define scSt(t) scanf("%s",t)
#define scF(t) scanf("%f",&t)
#define scLF(t) scanf("%lf",&t)
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORR(i,a,b) for(int i=a;i<=b;++i)
#define RFOR(i,b,a) for(int i=b;i>a;--i)
#define RFORR(i,b,a) for(int i=b;i>=a;--i)
#define FORIn(i,a,b,in) for(int i=a;i<b;i+=in)
#define FORDe(i,a,b,de) for(int i=a;i<b;i-=de)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define PI 3.1415926535897932384626433832795l

typedef pair<int,int> PII;
typedef pair<long long, long long> PLL;
typedef pair<double,double> PDD;
typedef pair<int,double> PID;
typedef pair<double,int> PDI;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<double> VD;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;




//----------------Code_here-----------------
void solve() {
	
	int num;
	cin>>num;
	VI digit;

	while(num!=0){
		int r = num%10;
		digit.push_back(r);
		num = num/10;		
	}

	for(int i=digit.size()-1;i>=0;--i){
		cout<<digit[i]<<" ";
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
