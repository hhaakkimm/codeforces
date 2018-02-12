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

ll n,a[MAXN],ans,d[32000],dd[32000],cel;
vector<ll> q,w,ww,r;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	forr(0,31625,i)
	{
		d[i]=(i*1ll*i);
			dd[i]=-(i*1ll*i);
	}
	forr(1,n,i)
	{
		cin >> a[i];
		if(int(sqrt(a[i]))*int(sqrt(a[i]))==a[i])
			q.pb(a[i]);
		else
		{
			w.pb(a[i]);
		}
	}
	if(sz(q)>=n/2)
	{
		ans=sz(q)-n/2;
		sort(all(q));
		int t=ans;
		ans = 0;
		forl(sz(q)-1,0,i)
		{
			if(t>0)
			{
				t--;
				if(q[i]!=0)
					ans++;
				else
						ans+=2;
			}
			else
				break;
		}
		cout << ans;
		return 0;
	}
	cel = n/2-sz(q);
	forr(0,sz(w)-1,i)
	{
		ll* f = lower_bound(d,d+31625,w[i]);
		int ff=sqrt(*f);
		int t=ff;
		if(ff>0)
			ff--;
		r.pb(min(abs(t*t-w[i]),abs((ff)*(ff)-w[i])));
		//cout<<abs(t*t-w[i])<<' '<<abs((ff)*(ff)-w[i])<<'\n';
	}
	sort(all(r));
	forr(0,cel-1,i)
		ans+=r[i];
	cout << ans;
	return 0;
}
