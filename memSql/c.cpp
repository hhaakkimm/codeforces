#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll loqng long
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define F first
#define S second
#define mod 1000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

int s,n,q,w,e;
vector<pair<pair<int,int>,int > > v;

bool cmp(pair<pair<int,int>,int > q,pair<pair<int,int>,int > w)
{
	if(q.F.F <= w.F.F)
	{
		return w.F.F>w.F.S;
	}
	return q.F.
}

int main()
{
	cin >> s >> n;
	forr(1,n,i)
	{
		cin >> e >> q >> w;
		v.pb(mp(mp(q,w),e));
	}
	sort(all(v),cmp);
	return 0;
}
