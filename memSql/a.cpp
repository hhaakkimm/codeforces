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

int n,q,w;
char c[111];


int main()
{
  cin>>n;
  forr(1,n,i)
  {
    cin>>c[i];
    if(c[i]=='F' && c[i-1]=='S')
      q++;
    if(c[i]=='S' && c[i-1]=='F')
      w++;

  }
  if(w<q)
  {
    cout<<"YES";
  }
  else
    cout<<"NO";
	return 0;
}
