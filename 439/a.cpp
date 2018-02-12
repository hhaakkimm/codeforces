#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

//constants
const int MAXN=(int)(2e6+1e1);
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

int n,ans,num[MAXN],x[MAXN],y[MAXN];

int main()
{
  cin >> n;
  forr(1,n,i)
  {
    cin>>x[i];
    num[x[i]]++;
  }
  forr(1,n,i)
  {
    cin>>y[i];
    num[y[i]]++;
  }
  forr(1,n,i)
  {
    if(num[x[i] xor y[i]]>0)
      ans++;
  }
  cout << ans;
  return 0;
}
