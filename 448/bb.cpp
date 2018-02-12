#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stdio.h>
#include <string.h>
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

ll n,k,x,a[MAXN],ans,t,m[MAXN+1000];
map<int,int> d;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> x >> k;
	//memset (d,-1,MAXN);
	forr(1,n,i)
	{
		cin >> a[i];
		d[a[i]/x] = i;
		m[a[i]/x]++;
	}
	if(k==0)
	{
		forr(1,n,i)
		{
			if(a[i]%x!=0)
				ans++;
		}
		cout << ans;
		return 0;
	}
	k--;
	forr(1,n,i)
	{
		if((k==0 && a[i]%x==0) || k>0)
		{
			if((d[a[i]/x+k]>0 && a[i]<=a[d[a[i]/x+k]]))
				ans+=m[a[i]/x+k];
			if((d[a[i]/x-k]>0 && a[i]<=a[d[a[i]/x-k]]))
				ans+=m[a[i]/x-k];
			if((d[a[i]/x+k]>0 && a[i]<=a[d[a[i]/x+k]] && d[a[i]/x-k]>0 && a[i]<=a[d[a[i]/x-k]] && a[i]/x+k==a[i]/x-k))
				t+=m[a[i]/x-k];
		}
	}
	cout << ans - t;
	return 0;
}
