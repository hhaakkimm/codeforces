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


int n;
double a[MAXN], b[MAXN], r;


int main() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	scanf("%d%lf",&n,&r);
	forr(1,n,i) {
		cin >> a[i];
		b[i] = r;
	}

	for (int i=1;i<=n;++i) {
		for (int j=1;j<i;++j) {
			if (abs(a[j]-a[i])<=2*r) {
				double t = sqrt(4*r*r-(a[i]-a[j])*(a[i]-a[j]));
				b[i] = max(b[i], t+b[j]);
			}
		}
	}

	for (int i=1;i<=n;++i) {
		printf("%.7f ", b[i]);
		//cout<<b[i]<<" ";
	}

	return 0;
}
