nclude <bits/stdc++.h>

using namespace std;

//constants
//const int MAXN=(int)(1e5+1e1);
//const double PI=acos(-1.0);
//
////defines
//#define ll long long
//#define F first
//#define S second
//#define fname ""
//#define fr freopen(fname".in","r",stdin);
//#define fw freopen(fname".out","w",stdout);
//#define mp make_pair
//#define pb push_back
//#define eof (-1)
//#define forr(xx:q
//,yy,zz) for(long long zz=xx;zz<=yy;zz++)
//#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
//#define sqr(x) ((x)*(x))
//#define sz(x) (int)x.size()
//#define len(s) (int)(s.length())
//#define all(a) a.begin(),a.end()
//
//ll n,k,ans,q;
//
//int main()
//{
        ios_base::sync_with_stdio(false);
                cin.tie(0);
                        cin>>n>>k;
                                q=240;
                                        q-=k;
                                                ans=1;
                                                        while(q>0)
{
                if(q-ans*5>=0)
                                    q-=(ans*5),ans++;
                            else
                                                break;
                                    //cout<<q<<' '<<ans<<'\n';
                                    //
}
        cout<<min(n,ans-1);
                return 0;
                }
//}
