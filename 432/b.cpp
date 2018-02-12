#include <bits/stdc++.h>

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
#define mod 1000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

double x1,x2,x3,y1,y2,y3;

int main()
{
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  double d1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  double d2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  double d3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  if(d1!=d2 || d2!=d3 || d1!=d3)
    cout<<"No";
  else
    cout<<"Yes";
  return 0;
}
