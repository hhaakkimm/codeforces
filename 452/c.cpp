#include <bits/stdc++.h>

const int inf = 1e9+5;
const int maxn = 6e4+5;

#define ll long long
#define pb push_back
#define mp make_pair
#define fe first
#define se second
using namespace std;

	int n;
	bool is[maxn];
  int sum;
  int r = 0;
	vector<int> a;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;

	for (int i=1;i<=n;++i) {
		sum+=i;
	}


	for (int i=n;i>0;i-=4) {
		r+=i;
		a.pb(i);
		if (i-3>0) {
			r+=i;
			r-=3;
			a.pb(i-3);
		}
	}
	cout<<abs(sum-2*r)<<endl<<a.size()<<" ";
	for (int i=0;i<a.size();++i) {
		cout<<a[i]<<" ";
	}

return 0;
}
