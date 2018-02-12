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

ll ans,a,b;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>a>>b;
  while(a>0 && b>0)
  {
  	if(a>=b)
  		ans+=a/b,a%=b;
  	else
  		ans+=b/a,b%=a;
  }
  cout<<ans;
	return 0;
}
