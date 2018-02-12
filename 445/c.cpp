#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <set>

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

int n,ans,q,a[MAXN+MAXN],dp[MAXN+MAXN+11],p[MAXN+MAXN];
bool is[MAXN+MAXN+11];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;


	forr(1,n,i)
		cin >> a[i];

	forl(n,1,i) {
		if (dp[a[i]]<=dp[i]+1) {
			p[a[i]] = i;
		}
		dp[a[i]] = max(dp[a[i]], dp[i]+1);
	}

	ans = n;
  forr(1,n,i)
		if (is[i]==0) {
			for (int j=i;p[j]!=0;j=p[j]) {
				ans--;
				is[j] = true;
			}
		}

	cout<<ans;


return 0;
}
