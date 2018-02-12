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
#define forr(xx,yy,zz) for(double zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define all(a) a.begin(),a.end()

double x[5],y[5],n,ansx[100],ansy[100];
double d1,d2,d3;
vector<pair<double,double> > v;

double len(double ax,double ay,double bx,double by)
{
	return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
 			cin>>x[1]>>y[1];
 			cin>>x[2]>>y[2];
 			cin>>x[3]>>y[3];
 		forr(-1000,1000,i)
 		{
 			forr(-1000,1000,j)
 			{
 				if(len(i,j,x[1],y[1])-len(x[2],y[2],x[3],y[3])==0 && len(i,j,x[3],y[3])-len(x[2],y[2],x[1],y[1])==0 || len(i,j,x[1],y[1])-len(x[2],y[2],x[3],y[3])==0 && len(i,j,x[2],y[2])-len(x[3],y[3],x[1],y[1])==0 || len(i,j,x[2],y[2])-len(x[1],y[1],x[3],y[3])==0 && len(i,j,x[1],y[1])-len(x[2],y[2],x[3],y[3])==0 || len(i,j,x[2],y[2])-len(x[1],y[1],x[3],y[0])==0 && len(i,j,x[3],y[3])-len(x[2],y[2],x[1],y[1])==0 || len(i,j,x[3],y[3])-len(x[2],y[2],x[1],y[1])==0 && len(i,j,x[1],y[1])==len(x[2],y[2],x[3],y[3]) || len(i,j,x[3],y[3])==len(x[2],y[2],x[1],y[1]) && len(i,j,x[2],y[2])==len(x[1],y[1],x[1],y[1]))
 				{
 					if(i!=x[1] && j!=y[1] || i!=x[2] && j!=y[2] || i!=x[3] && j!=y[3])
 						v.pb(mp(i,j));
 				}
 			}
 		}
 		cout<<sz(v)<<'\n';
 		for (int i = 0; i < sz(v); ++i)
 		{
 			cout<<v[i].F<<' '<<v[i].S<<'\n';
 		}
 		return 0;
}