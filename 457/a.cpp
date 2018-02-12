//#include <bits/stdc++.h>
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
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

int x,h,m,ans,q;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> x >> h >> m;
	//q=h*60+m;
	// if(h%10==7 || m%10==7)
	// {
	// 	cout << 0;
	// 	return 0;
	// }
	// while(true)
	// {
	// 	if(m%10==7 || h%10==7)
	// 	{
	// 		cout << ans;
	// 		return 0;
	// 	}
	// 	if(m>=x)	m-=x;
	// 	else
	// 	{
	// 		m=(m+60)-x;
	// 		if(h!=0)	h--;
	// 		else
	// 			h=23;
	// 	}
	// 	ans++;
	for(int i =0;1;i++)
	{
		if(h%10==7 || m%10==7)
		{
			cout << i;
			return 0;
		}
		ans = 0;
		m-=x;
		if(m<0)
		{
			ans=abs(m);
			m=60;
			m-=ans;
			h--;
		}
		if(h<0)
			h=23;
	}

	//	cout << h<< ' '<<m<<'\n';

  return 0;
}
