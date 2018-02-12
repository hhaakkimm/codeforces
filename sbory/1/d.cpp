#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <deque>
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
#define F first
#define S second
//=

string s;
int p[100005];
map<string,int> m;

vector<int> z_function (string s) {
	int n = (int) s.length();
	vector<int> z (n);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i, r = i+z[i]-1;
	}
	return z;
}

int a[MAXN];
bool b[MAXN];
vector<pair<int,int> > ans;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	vector<int> v = z_function(s);
	v[0]=len(s);
	forl(v.size()-1,0,i)
	{
		if(v[i]+i==len(s) || b[v[i]]==1)
			b[v[i]]=1;
	}
	forr(0,v.size()-1,i)
	{
		if(b[v[i]])
			a[v[i]]++;
		//cout << v[i] << ' ';
	}
//	cout << ans << '\n';
	int k = 0;
	forl(len(s),1,i)
	{
		//cout << a[i] << ' ';
		 k+=a[i];
		 if(a[i]>0)
		 	ans.pb(mp(i,k));
		 	//cout << i << ' ' << k << '\n';
	}
	cout << sz(ans) << '\n';
	for(int i = sz(ans)-1; i >= 0; i--)
		cout << ans[i].first << ' ' << ans[i].second << '\n';
	return 0;
}
