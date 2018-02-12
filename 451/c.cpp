#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define TASKNAME "."
#define fr freopen(TASKNAME"in","r",stdin);
#define fw freopen(TASKNAME"out","w",stdout);
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

int n,k;
string s,t,q;
vector<pair<string,vector<string> > > ans;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	forr(1,n,i)
	{
		cin >> s >> k;
		int g=-1;
		forr(0,sz(ans)-1,j)
		{
			if(ans[j].F==s)
			{
				g = j;
				break;
			}
		}
		if(g==-1)
		{
			ans.pb(mp(s,0));
			g = ans.size()-1;
		}
		forr(1,k,j)
		{
			cin >> q;
			ans[g].S.pb(q);
		}
	}
	GGG:
	forr(0,sz(ans)-1,i)
	{
		forr(0,sz(ans[i].S)-1,j)
		{
			forr(j+1,sz(ans[i].S)-1,z)
			{
				if(len(ans[i].S[j])>=len(ans[i].S[z]))
				{
					if(ans[i].S[j].substr(len(ans[i].S[j])-len(ans[i].S[z]),len(ans[i].S[z]))==ans[i].S[z])
					{
					//	myvector.erase (myvector.begin()+5)

					//	cout << ans[i].S[z] << ' ' << ans[i].S[j] << '\n';
						ans[i].S.erase(ans[i].S.begin()+z);
						goto GGG;
					}
				}
				else
				{
					if(ans[i].S[z].substr(len(ans[i].S[z])-len(ans[i].S[j]),len(ans[i].S[j]))==ans[i].S[j])
					{
					//	myvector.erase (myvector.begin()+5)

					//	cout << ans[i].S[z] << ' ' << ans[i].S[j] << '\n';
						ans[i].S.erase(ans[i].S.begin()+j);
						goto GGG;
				}
				}
			}
		}
	}


	cout<< sz(ans) << '\n';
	forr(0,sz(ans)-1,i)
	{
		cout << ans[i].F << ' '<<sz(ans[i].S) << ' ';
		forr(0,sz(ans[i].S)-1,j)
			cout << ans[i].S[j]<< ' ';
		cout << '\n';
	}
	return 0;
}
