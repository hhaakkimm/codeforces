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
const int MAXN=(int)(2e5+1e1);
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

double n,a[MAXN],k;
double sum,summ,max_sum;


double calc(double x)
{
		double ans = a[1]-x;
		for (int r=1; r<=n; ++r) {
				summ += (a[r]-x);
				ans = min (ans, summ - max_sum);
				max_sum = max (max_sum, summ);
		}
		ans = fabs(ans);
		return ans;
}

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	scanf("%lf",&n);
	k = a[1];
	forr(2,n,i)
	{
		scanf("%lf",&a[i]);
		k=max(k,a[i]);
	}
	double l=0,r=10000;
	forr(1,60,i)
	{
		double mid1=(l+(r-l)/3);
		double mid2=(r-(r-l)/3);
		if(calc(mid1)<calc(mid2))
		{
				l=mid1;
		}
		else
			r=mid2;
	}
	printf("%.6f",calc(l));
	return 0;
}
