#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
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

ll n,k,ans;


int main()
{
  cin >> ans;
  /*forr(0,n,i)
  {
    k = i;
    if((n-i)%2==0)
    {
      ans++;
    }
  }
  cout << ans;
*/
if(ans>1)
  cout << ans*2-1<< ' ' << 2 << '\n' << 1 << ' ' << 2;
else
  cout << 1 << ' ' << 1 << '\n' << 1;
  return 0;
}
