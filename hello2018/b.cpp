
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define TASKNAME "."
#define fr freopen(TASKNAME"in","r",stdin);
#define fw freopen(TASKNAME"out","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

int n, a[1111];
bool ans;
vector<int> v[1111];


void go(int t, bool r) {
	if (ans) {
		return;
	}
	int c = 0;
	for (int i=0;i<v[t].size();++i) {
		if (v[v[t][i]].size()) {
			go(v[t][i], 0);
		}
		else {
			c++;
		}
	}
	if (c<3) {
		ans = 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	for (int i=2;i<=n;++i) {
		cin>>a[i];
		v[a[i]].pb(i);
	}

	go(1, 1);

	if (ans == 1) {
		cout<<"No";
	}
	else {
		cout<<"Yes";
	}


	return 0;
}
