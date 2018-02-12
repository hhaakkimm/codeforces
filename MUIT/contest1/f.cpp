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
const int MAXN=(int)(2e6+1e1);
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

int n,m,ans;

int main(){
  cin >> n >> m;
  forr((n+1)/2,n,i)
  {
    if(i%m==0)
    {
      cout<<i;
      return 0;
    }
  }
  cout << -1;
  return 0;
}
