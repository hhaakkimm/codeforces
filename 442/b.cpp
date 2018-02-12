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

string s;
int q,w,e,ans,a[5055],b[5055];
vector<int> b_pos;

int main()
{
	ios_base::sync_with_stdio(false);
	cin >> s;
	forr(0,len(s)-1,i)
	{
		b[i]=b[i-1];
		if(s[i]=='b')
			b[i]++;
		a[i]=a[i-1];
		if(s[i]=='a')
				a[i]++;
	}
	ans = max(a[len(s)-1],b[len(s)-1]);
	forr(0,len(s),i)
	{
		forr(i,len(s),j)
		{

				ans = max(ans,a[i]+(b[j]-b[i])+(a[len(s)-1]-a[j]));

		}
	}
	forr(0,len(s),j)
	{
			ans = max(ans,b[j]+(a[len(s)-1]-a[j]));
		}
	cout << ans;
	return 0;
}
