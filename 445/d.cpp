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
const int MAXN=(int)(1e6+1e1);
const double PI=acos(-1.0);
const long long mod=(long long)(1e9+7);

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

ll n,k,ans,a[MAXN];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  a[0]=1;
  forr(1,(int)(1e6),i)
  {
    a[i]=(a[i-1]%mod*i%mod)%mod;
  }
  cin >> n >> k;
  forr(k+1,n-1,i)
  {
    ans=(ans%mod + a[n-1]%mod)%mod;
    ans=(ans%mod + (a[i-1]%mod)*(a[(n-i)]%mod)%mod) % mod;
  }
  cout << ans;
	return 0;
}
