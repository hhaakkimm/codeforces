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
const long long INF=(long long)(1e18+7);

//defines
#define ll long long
#define TASKNAME "."
#define fr freopen(TASKNAME"in","r",stdin);
#define fw freopen(TASKNAME"out","w",stdout);
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

// int n,L,c[33],b[33];
// int K[33][MAXN];
//
// int main()
// {
// 		ios_baS::sync_with_stdio(falS);
// 		cin.tie(0);
// 		cin >> n >> L;
// 		forr(0,n-1,i)
// 			cin >> c[i];
//
// 		forr(1,n-1,i)
// 			b[i]=(1<<(i));
// 		b[0]=1;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int w = 0; w <= L; w++)
//         {
//             if (i==0 || w==0)
//                 K[i][w] = 0;
//             elS if (b[i-1] <= w)
//                   K[i][w] = max(c[i-1] + K[i-1][w-b[i-1]],  K[i-1][w]);
//             elS
//                   K[i][w] = K[i-1][w];
//         }
//     }
// 		// int ans=MAXN;
// 		// forr(L,L+b[n-1],i)
// 		// {
// 		// 	ans = min(ans,K[n][i]);
// 		// 	cout<<K[n][i] << ' ';
// 		// }
// 		cout << K[n][L] <<'\n';
// 		 forr(0,L,i)
// 		 	cout<<K[n][i]<<' ';
// 		// 	cout << b[i] << ' ' << c[i] << '\n';
// 		//cout << ' ' << (0<<1);
//     return 0;
// }

ll ans;
int n, m;
pair<ll, int> c[33];
map<int,bool> used;
map<int,ll>dp;
vector<pair<int, int> >v;

ll go(int t) {
	if (t<=0) {
		return 0;
	}

	ll mn = INF;
	forr(1,n,i) {
		int k = int(t/c[i].S);
		ll sum = 0;
		if (k==0) {
			sum = c[i].F;
		}
		else {
			ll rr;
			if (used[t%c[i].S]) {
				rr = dp[t%c[i].S];
			}
			else {
				rr = go(t%c[i].S);
			}

			sum = min(k*c[i].F+rr, (k+1)*c[i].F);
		}
		mn = min(mn, sum);
	}
	used[t] = true;
	dp[t] = mn;
	return mn;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin>>n>>m;
	forr(1,n,i) {
		cin>>c[i].F;
		c[i].S = (1<<(i-1));
	}
	cout<<go(m);
	return 0;
}
