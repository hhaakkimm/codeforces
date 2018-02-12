#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(3e5+1e1);
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

ll n,k,a[MAXN],q,ans,d[MAXN],j;

int main()
{
  cin >> n >> k;
  forr(1,n,i)
    cin >> a[i];
  sort(a+1,a+n+1);
  ll l=0,r=1e9;
  while(l<=r){
  		ll mid=(l+r)/2;
  		forr(1,n,i)
  		{
        d[0]=1;
  			j=lower_bound(a+1,a+n+1,a[i]-mid)-a;
        //cout << j << ' ';
  			if(j-1 <= i-k)
          d[i] = d[i-1]+(d[i-k]>d[j-2]);
        else
          d[i] = d[i-1];
  		}
  		if(d[n]>d[n-1])
      {
        ans=mid;
        r=mid-1;
      }
      else
        l=mid+1;
  }
  cout << ans;
  return 0;
}
