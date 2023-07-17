#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

#define chmax(a,b) if ( a < b ) a = b
#define chmin(a,b) if ( a > b ) a = b

#define si(a) scanf("%d",&a)
#define pis(a) printf("%d ",a)
#define pi(a) printf("%d",a)
#define nln printf("\n")

void prepare_lookup_table ()
{
}

void do_task ()
{
	string s, ss="";
	bool sp = true;
	while ( cin >> s ) {
		if ( s.length() > 8 ) {
			s = "#bigword";
		}
		if ( sp ) {
			ss = s;
			sp = false;
			continue;
		}
		if ( s.length()+ss.length()+2 > 9 ) {
			cout << ss << "\n";
			ss = s;
		} else {
			ss += " " + s;
		}
	}
	cout << ss;
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	ll t = 1;
	//cin >> t;
	while ( t-- ) {
		do_task();
	}


	return 0;
}
