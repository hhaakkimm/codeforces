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
const int inf=(int)(1e9);

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

ll n,m,a,b,x,y,k,ans;

int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	cin >> n >> m >> a >> b >> k;
	forr(1,k,i)
	{
		cin >> x >> y;
		int l=0,r=inf;
		while(r-l>1){
			int mm = (l+r)>>1;
			if(a+mm*x<=n && b+mm*y<=m && a+mm*x>=1 && b+mm*y>=1)
			{
				l=mm;
			}
			else
				r=mm;
		}
		//cout << l << ' ' << r << '\n';
		//if(a+l*x<=n && b+l*y<=m && a+l*x>=1 && b+l*y>=1)
		a+=l*x;
		b+=l*y;
			ans+=l;
	}
	cout << ans;
	return 0;
}
