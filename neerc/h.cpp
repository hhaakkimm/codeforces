#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(4e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
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

int n;
char c[MAXN];
map<char, int> m;
map<char, bool> ch;
vector<char> t;
vector<pair<int,char> > v;
vector<string> ans;

int main()
{
  cin >> n;
  forr(1,n,i)
  {
    cin >> c[i];
    m[c[i]]++;
    ch[c[i]]=0;
  }
  forr(1,n,i)
  {
    if(m[c[i]]%2)
    {
      t.pb(c[i]);
      if(m[c[i]]>1 && !ch[c[i]])
      {
        v.pb(mp(m[c[i]]-1,c[i]));
        ch[c[i]]=1;
      }
    }
    else if(!ch[c[i]])
    {
      v.pb(mp(m[c[i]],c[i]));
      ch[c[i]]=1;
    }
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].F << ' ' << v[i].S << '\n';
  }
  return 0;
}
