#include<iostream>
#include<cmath>
#include<fstream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<math.h>
#include<time.h>
#include<queue>
#include<stack>
#include<deque>

//TEMPLATE STARTS HERE
using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define F first
#define S second
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define str string
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
ll n,a,b,q,w,e,r;
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>a>>b;
	cout<<n-max(a+1,n-b)+1;
	return 0;
}
