#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

//TEMPLATE STARTS HERE
using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define F first
#define S second
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define str string
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()


ll n,d,q,ans;
vector<ll> v;

int main(){
  cin >> n >> d;
  forr(1,n,i)
  {
    cin >> q;
    v.pb(q);
  }
  forr(0,sz(v)-1,i)
  {
    ll k = upper_bound(v.begin(),v.end(),v[i]+d) - v.begin();
    k--;
      ans+=((k-i-1))*(k-i)/2;
      //cout << v[i] << ' ' << v[k] <<' '<< ((k-i-1)/2)*(k-i) <<'\n';
  }
  cout << ans;
  return 0;
}
