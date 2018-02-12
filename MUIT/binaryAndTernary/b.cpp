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
#define F first
#define S second
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

ll a,b;
int x,y;
string s;
vector<pair<int,int> > v;
bool flag;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> b >> s;
	v.pb(mp(x,y));
	forr(0,len(s)-1,i)
	{
		if(s[i]=='U')
			y++;
		else if(s[i]=='D')
			y--;
		else if(s[i]=='L')
			x--;
		else
			x++;
		v.pb(mp(x,y));
	}
	forr(0,sz(v)-1,i)
  {
      ll q=a-v[i].F,w=b-v[i].S;
      if((q==0 && w==0))
          flag=1;
      else if(x!=0 && y!=0 && q%x==0 && w%y==0 && q/x==w/y && x*q>=0 && y*w>=0)
          flag=1;
      else if(q==0 && x==0 && y!=0 && w%y==0 && y*w>=0)
          flag=1;
      else if(w==0 && y==0 && x!=0 && q%x==0 && x*q>=0)
          flag=1;
  }
	if(flag)
		cout << "Yes";
	else
			cout << "No";
	return 0;
}
