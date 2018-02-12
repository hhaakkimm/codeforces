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
const int MAXN=(int)(1e6+1e1);
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

int n,x,ans=-MAXN;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ll k =0;
	for(int i=29;i>=0;i--)
	{
		if((1<<i)<n)
			k+=(1<<i);
	}

	k++;
	cout << k << '\n';
  return 0;
}
