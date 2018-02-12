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
vector<int> v;

int main()
{
	cin >> n;
	int k = (n+1)/2;
	//v.pb(k);
	/*forr(k,n,i)
	{
		if(k+i<=n)
			v.pb(k+i);
		if(k-i>=1)
			v.pb(k-i);
	}
	int l = 2;
	int r = n-1;
	while(l<=k && r>=k)
	{
		if(l<k)
			v.pb(l);
		if(r>k)
			v.pb(r);
		l++,r--;
	}
	v.pb(k);
		v.pb(i);
	}
	forl(n-1,k+1,i)
		v.pb(i);
	forl(k-1,1,i)
			v.pb(i);
	forr(2,k-1,i)
		v.pb(i);
	v.pb(k);
	cout << v.size() << '\n';
	forr(0,sz(v)-1,i)
		cout << v[i] << ' ';*/
	if (n%2) {
		cout<<3*(n/2)+1;
	}
	else {
		cout<<3*n/2;
	}
	cout<<"\n";
	for (int i=2;i<=n;i+=2) {
		cout<<i<<" ";
	}
	for (int i=1;i<=n;i+=2) {
		cout<<i<<" ";
	}
	for (int i=2;i<=n;i+=2) {
		cout<<i<<" ";
	}
	return 0;
}
