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

string s,t;
vector<string> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s >> t;
	string test="zzzzzzzzzz",ans;
	forr(0,len(s)-1,i)
	{
		if(s.substr(0,i+1)+t[0]<test){
			ans=s.substr(0,i+1)+t[0];
			test=s.substr(0,i+1)+t[0];
		}
	}
	cout << ans;
	return 0;
}
