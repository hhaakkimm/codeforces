#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>

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

char c[MAXN];
int n,ans,d[100],k,z;
int u[MAXN], a[MAXN];
map < char, int > q;
bool check(int k)
{
    memset (u, 0, sizeof (u));
    int sum = 0;
    for (int i = 1; i <= k; ++ i)
    {
        u[a[i]] ++;
        if (u[a[i]] == 1)
            ++ sum;
        if (sum == z)
            return true;
    }
    for (int i = k + 1; i <= n; ++ i)
    {
        u[a[i - k]] --;
        if (u[a[i - k]] == 0)
            -- sum;
        u[a[i]] ++;
        if (u[a[i]] == 1)
            ++ sum;
        if (sum == z)
            return true;
    }
    return false;
}



int main(){
  cin >> n ;
  for (int i = 1; i <= n; ++ i)
  {
      cin >> c[i];
      if (!q.count (c[i]))
      {
          ++ z;
          q[c[i]] = z;
      }
      a[i] = q[c[i]];
  }
  int l = 1;
  int r = n;
  while(l<=r)
  {
    int m = (l+r)>>1;
    if(check(m))
    {
      ans = m;
      r = m - 1;
    }
    else
      l = m + 1;
  }
  cout << ans;
  return 0;
}
