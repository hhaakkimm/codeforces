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

int ans,a[33],b;
string s;


int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
 		cin>>s;
 		forr(0,len(s)-1,i)
 		{
 			if(islower(s[i]))
 				a[s[i]-'a']++;
 			else if(s[i]=='B')
 				b++;
 		}//Bulbasaur
 		ans=min(b,min(a[0]/2,min(a[1],min(a['u'-'a']/2,min(a['l'-'a'],min(a['s'-'a'],min(a['r'-'a'])))))));
  		cout<<ans;
        return 0;
}