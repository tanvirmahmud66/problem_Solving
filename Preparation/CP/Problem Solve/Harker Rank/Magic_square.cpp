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
#define RFOR(i,b,a) for(int i=b,i>a;--i)
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


void show(pair<int, bool> p[3][3]){
	for(int i=0;i<3;++i){
		for(int j=0;j<3;j++){
			cout<<p[i][j].first<<" "<<p[i][j].second<<"      ";
		}cout<<endl<<endl;
	}
}


//----------------Code_here-----------------
void solve() {
	
	
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<a[i][j]<<" ";
	// 	}cout<<endl;
	// }

	int count=0;
	int mc=15;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int row = 0;
			int col = 0;
			int dia = 0;

			int l=0;
			while(l<=2){
				row += a[i][l];
				col += a[l][j];
				if(i==j){
					dia += a[l][l];
				}
				++l;
			}

			cout<<"FOR->"<<a[i][j]<<":    Row:	"<<row<<"	"<<"col:   "<<col<<"	"<<"Dia:	"<<dia<<" "<<endl;
			if(mc-row==0 || mc-col==0 || mc-dia == 0){
				continue;
			}else{
				int r,c,d;
                r = mc-row;
                c = mc-col;
                int minor=0;
                if(r<0 || c<0){
                	minor = max(r,c);
                }else{
                	minor = min(r,c);
                }
                if(i==j){
                	d = mc-dia;
                	minor = min(minor,dia);
                	if(d<0){
                		minor = max(minor,dia);
                	}else{
                		minor = min(minor,dia);
                	}
                }
                a[i][j]+=minor;
                count+=minor;
			}

		}
	}

	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int rw = 0;
			int cl = 0;
			int da = 0;

			int k=0;
			while(k<=2){
				rw += a[i][k];
				cl += a[k][j];
				if(i==j){
					da += a[k][k];
				}
				++k;
			}
			cout<<"FOR->"<<a[i][j]<<":    Row:	"<<rw<<"	"<<"col:   "<<cl<<"	"<<"Dia:	"<<da<<" "<<endl;
		}cout<<endl;
	}	

	cout<<endl<<endl<<count;
	

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
