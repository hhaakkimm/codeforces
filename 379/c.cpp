#include <bits/stdc++.h>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define F first
#define S second
#define fname ""
#define fr freopen(fname".in","r",stdin);
#define fw freopen(fname".out","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(long long zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()

ll n,m,k,x,mana,a[MAXN+MAXN],b[MAXN+MAXN],c[MAXN+MAXN],d[MAXN+MAXN],ans,q,w,mana1;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cin>>n>>m>>k>>x>>mana;
        for(1,m,i)
        {
        	if(a[i]>x)
        	{
        		mana1=mana-b[i];
        		int l=1,r=k;
        	}
        }	
        return 0;
}