#include <bits/stdc++.h>

using namespace std;

//constants
const int MAXN=(int)(1e6+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define TASKNAME "secretroom."
#define fr freopen(TASKNAME"in","r",stdin);
#define fw freopen(TASKNAME"out","w",stdout);
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

ll n,q,w,t,ans,b[MAXN];

int main()
{
	  scanf("%d",&n);
    forr(0,n-1,i)
    {
    	scanf("%d",&b[i]);
    	b[i]+=i;
	}
  
	return 0;
}
