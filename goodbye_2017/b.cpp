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
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

int n,m,ans,si,sj;
char c[55][55];
string s;
bool flag,flag1,flag2,flag3;

void go(int x,int y,char q,char w,char e,char r)
{
	forr(0,len(s)-1,i)
	{
		if(c[x][y]=='E')
		{
			ans++;
			return;
		}
		if(s[i]==q)
		{
			x+=1;
			if(c[x][y]=='#' || x==n+1 || y==m+1 || x==0 || y==0)
				return;
		}
		if(s[i]==w)
		{
			y+=1;
			if(c[x][y]=='#' || x==n+1 || y==m+1 || x==0 || y==0)
				return;
		}
		if(s[i]==e)
		{
			x-=1;
			if(c[x][y]=='#' || x==n+1 || y==m+1 || x==0 || y==0)
				return;
		}
		if(s[i]==r)
		{
			y-=1;
			if(c[x][y]=='#' || x==n+1 || y==m+1 || x==0 || y==0)
				return;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	forr(1,n,i)
	{
		forr(1,m,j)
		{
			cin >> c[i][j];
			if(c[i][j]=='S')
				si=i,sj=j;
		}
	}
	cin >> s;
	// std::vector<char> dd;
	// forr(0,len(s)-1,i)
	// {
	// 	if(s[i]=='0' && !flag)
	// 	{
	// 		dd.pb('0');
	// 		flag=1;
	// 	}
	// 		if(s[i]=='1' && !flag1)
	// 		{
	// 			dd.pb('1');
	// 			flag1=1;
	// 		}
	//
	// 			if(s[i]=='2' && !flag2)
	// 			{
	// 				dd.pb('2');
	// 				flag2=1;
	// 			}
	//
	// 				if(s[i]=='3' && !flag3)
	// 				{
	// 					dd.pb('3');
	// 					flag3=1;
	// 				}
	// }
//	sort(all(dd));
	// if(dd[0]!='0')
	// 	dd[0]='0';
	// if(sz(dd)>1)
	// {
	//
	// }
	char dd[5]={'0','1','2','3'};
	do{
		go(si,sj,dd[0],dd[1],dd[2],dd[3]);
	}while(next_permutation(dd,dd+4));
	// go(si,sj,'0','1','2','3');
	// go(si,sj,'0','1','3','2');
	// go(si,sj,'0','3','2','1');
	// go(si,sj,'0','3','1','2');
	// go(si,sj,'0','2','1','3');
	// go(si,sj,'0','2','3','1');
	// go(si,sj,'1','0','2','3');
	// go(si,sj,'1','0','3','2');
	// go(si,sj,'1','3','0','2');
	// go(si,sj,'1','3','2','0');
	// go(si,sj,'1','2','0','3');
	// go(si,sj,'1','2','3','0');
	// go(si,sj,'0','1','2','3');
	// go(si,sj,'0','1','2','3');
	// go(si,sj,'0','1','2','3');
	// go(si,sj,'0','1','2','3');
	cout << ans;
	return 0;
}
