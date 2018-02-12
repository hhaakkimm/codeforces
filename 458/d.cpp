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
const int MAXN=(int)(5e5+1e1);
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

ll a[MAXN],t[4*MAXN],d[MAXN];

ll gcd(ll a,ll b)
{
	while(b)
	{
		a%=b;
		swap(a,b);
	}
	return a;
}

void build(int v,int tl,int tr)
{
	if(tl == tr)
		t[v]=a[tl];
	else
	{
		int tm=(tl+tr)>>1;
		build(v+v,tl,tm);
		build(v+v+1,tm+1,tr);
		t[v]=gcd(t[v+v],t[v+v+1]);
	}
}

ll get(int v,int tl,int tr,int l,int r)
{
	if(l>r)
		return 0;
	if(tl == l && tr == r)
			return t[v];
	int tm=(tl+tr)>>1;
	return gcd(get(v+v,tl,tm,l,min(tm,r)),get(v+v+1,tm+1,tr,max(tm+1,l),r));
}

void update(int v,int tl,int tr,int pos,int x)
{
	if(tl == tr)
		t[v]=x;
	else
	{
		int tm=(tl+tr)>>1;
		if(pos<=tm)
			update(v+v,tl,tm,pos,x);
		else
			update(v+v+1,tm+1,tr,pos,x);
		t[v]=gcd(t[v+v],t[v+v+1]);
	}
}

ll n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	forr(0,n-1,i)
		cin >> a[i],d[i]=a[i];
	build(1,0,n-1);
	int T;
	cin >> T;
	while(T--)
	{
		int c,l,r;
		ll p,x;
		cin >> c;
		if(c==1)
		{
			cin >> l >> r >> x;
			l--,r--;
			p=get(1,0,n-1,l,r);
			if(p == x)
			{
					cout << "YES\n";
					continue;
			}
			// int k =0;
			// for(int i=29;i>=0;i--)
			// {
			// 	if((1<<i)<n)
			// 		k+=(1<<i);
			// }
      //
			// k++;
			// //cout << k << '\n';
			// int cnt=0;
			// forr(k+l,k+r,i)
			// {
			// 	if(t[i]%x!=0)
			// 	{
			// 		cnt++;
			// 		if(cnt==2)
			// 			break;
			// 	}
			// }
			// if(p>x)
			// {
				int cnt=0;
				forr(l,r,i)
				{
					if(d[i]%x!=0)
						cnt++;
					if(cnt==2)
							break;
				}
				if(cnt==1)
					cout << "YES\n";
				else
						cout<< "NO\n";
			}
			// else
			// 			cout<< "NO\n";
		}
		else
		{
			cin >> p >> x;
			update(1,0,n-1,p-1,x);
			d[p-1]=x;
		}
	}
  return 0;
}
