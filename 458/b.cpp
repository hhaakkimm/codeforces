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

int n,a[MAXN],k,ans,mx,pmx;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	forr(1,n,i)
	{
		cin>>k;
		a[k]++;
		if(mx < k){
			pmx = mx;
			mx = k;
		}
 	}
 	forr(1,(int)(1e5),i)
	{
		if(a[i]%2==1)
		{
				cout<<"Conan";
				return 0;
		}
	}

 		cout<<"Agasa";
  return 0;
}
