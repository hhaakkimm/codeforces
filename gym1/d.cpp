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

ll n,a[2222],ans,q,w;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cin>>n;
        for(int i=1;i<=n;i++)
        {
        	cin>>q>>w;
        	for(int j=q;j<=w;j++)
        		a[j]=1;
        }
        for(int i=1;i<=1826;i++)
        {
        	if(a[i]==1)
        	{
        		ans=0;
        		for(int j=i;j<i+180;j++)
        		{
        			if(a[j]==1)
        				ans++;
        		}
        		if(ans>90)
        		{
        			cout<<"No";
        			return 0;
        		}
        	}
        }
        cout<<"Yes";
        return 0;
}
