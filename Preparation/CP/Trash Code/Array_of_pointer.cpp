#include <bits/stdc++.h>
using namespace std;

#define 	L 				long
#define 	LL 				long long
#define 	LF 				long float
#define 	LD 				long double
#define 	scI(t) 			scanf("%d",&t)
#define 	scLI(t) 		scanf("%ld",&t)
#define 	scLLI(t) 		scanf("%lld",&t)
#define 	scLD(t) 		scanf("%lf",&t)
#define 	scCh(t) 		scanf("%c",&t)
#define 	scSt(t) 		scanf("%s",t)
#define 	scF(t) 			scanf("%f",&t)
#define 	scLF(t) 		scanf("%lf",&t)
#define 	FOR(i,a,b) 		for(int i=a;i<b;++i)
#define 	FORR(i,a,b) 	for(int i=a;i<=b;++i)
#define 	RFOR(i,b,a) 	for(int i=b,i>a;--i)
#define 	RFORR(i,b,a) 	for(int i=b;i>=a;--i)
#define 	FORIn(i,a,b,in) for(int i=a;i<b;i+=in)
#define 	FORDe(i,a,b,de) for(int i=a;i<b;i-=de)
#define 	mp(a,b) 		make_pair(a,b)
#define 	pb(a) 			push_back(a)

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define PI 3.1415926535897932384626433832795l

typedef 	pair<int,int> 					PII;
typedef 	pair<long long, long long> 		PLL;
typedef 	pair<double,double> 			PDD;
typedef 	pair<int,double> 				PID;
typedef 	pair<double,int> 				PDI;
typedef 	vector<int> 					VI;
typedef 	vector<long long> 				VL;
typedef 	vector<double> 					VD;
typedef 	vector<string> 					VS;
typedef 	vector<PII> 					VPII;
typedef 	vector<VI> 						VVI;




//----------------Code_here-----------------
void solve() {
	
	int a[] = {1,2,5,46,8,87,9,10};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<size<<endl;

	cout<<a<<endl;
	cout<<a+1<<endl;
	cout<<a+2<<endl;
	cout<<a+3<<endl;


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
