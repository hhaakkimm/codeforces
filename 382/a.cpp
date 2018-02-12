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

char a[111];
int n,k,q,w;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cin>>n>>k;
        forr(1,n,i)
        {
                cin>>a[i];
                if(a[i]=='G')
                        q=i;
                if(a[i]=='T')
                        w=i;
        }
        if(q<w)
        {
         for(int i=q;i<=w;i)
         {
                if(i==w)
                {
                    cout<<"YES";
                        return 0;
                }
                if(a[i]=='#' || i+k>w)
                {
                        cout<<"NO";
                        return 0;
                }
                i+=k;
         }
         cout<<"YES";
        }        
        else
        {
         for(int i=w;i<=q;i)
         {
             if(i==q)
                {
                    cout<<"YES";
                    return 0;
                }
                       
                if(a[i]=='#' || i+k>q)
                {
                        cout<<"NO";
                        return 0;
                }
                i+=k;
         }
         cout<<"YES";
        }        
        return 0;
}