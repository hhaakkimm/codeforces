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

string s,a[10]={"Danil", "Olya", "Slava", "Ann", "Nikita"};
int k=0;

int main()
{
	cin >> s;
	for(int i=0;i<5;i++)
	{
		for(int j = 0; j < len(s)-len(a[i])+1; j++)
		{
			if(s.substr(j,len(a[i])) == a[i])
			{
						k++;
			}
		}
	}
	if(k==1)
	{
	cout << "YES";
return 0;
}
	cout << "NO";
	return 0;
}
