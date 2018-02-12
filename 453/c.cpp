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
const int MAXN=(int)(1e4+1e1);
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

std::vector<int> v[MAXN];
int color[MAXN],c[MAXN];
bool was[MAXN];
queue<int> w;
ll n,ans;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	forr(1,n-1,i)
	{
		int q;
		cin >> q;
		v[q-1].pb(i);
		v[i].pb(q-1);
	}
	forr(0,n-1,i)
		cin >> c[i];
	w.push(0);
	was[0]=1;
	while(!w.empty())
	{
		int q=w.front();
		if(c[q] != color[q])	ans++;
		forr(0,v[q].size()-1,i)
		{
			if(was[v[q][i]]==0)
			{
				color[v[q][i]] = c[q];
				was[v[q][i]] = 1;
				w.push(v[q][i]);
			}
		}
		w.pop();
	}
	cout<<ans;

	return 0;

}
