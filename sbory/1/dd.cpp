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

typedef long long ll;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);
const int INF=(int)(1e9);

//defines
#define F first
#define S second
#define FN ""
#define fr freopen(FN"in","r",stdin);
#define fw freopen(FN"out","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#ifdef _WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

string s,t;
vector<pair<int,int> > ans;
int m[MAXN];
int z[MAXN];


int main	()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    int n = 0;
    int last = -1;
    forr(1,len(s)-1,i){
      if(last>i) z[i]=min(z[i-n],last-i);
      while(i + z[i] < s.size() && s[i+z[i]] == s[z[i]]) ++z[i];
      if(i + z[i] > last) last = i + z[i], n = i;
    }
   	 z[0] = s.size();
   	 forr(0,len(s)-1,i) m[z[i]]++;
     	forl(len(s),1,i)
     	 m[i-1] += m[i];
      forr(1,len(s),i)
      	if(z[len(s)-i]==i)
			ans.pb(mp(i,m[i]));
    cout<<sz(ans)<<'\n';
    forr(0,sz(ans)-1,i)
   		cout<<ans[i].F<<' '<<ans[i].S<<'\n';
    return 0;
}
