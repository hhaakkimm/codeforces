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
#define forr(xx,yy,zz) for(long long zz=xx;zz<yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()

char a[2222],ans[2222];
int n,k;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
 		cin>>n;
 		forr(0,n,i)
 			cin>>a[i];
       	k=n;
       	int pos=(n+1)/2;
       	forr(0,n,i)
       	{
       		if(i%2==0)
       			ans[pos]=a[i];
       		else
       			ans[pos+i]=a[i];
       	}
      	forr(0,n,i)
      		cout<<ans[i];
        return 0;
}