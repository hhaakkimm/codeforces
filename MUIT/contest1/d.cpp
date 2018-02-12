#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

//TEMPLATE STARTS HERE
using namespace std;

//constants
const int MAXN=(int)(2e6+1e1);
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

int n;
ll p, x;
bool d[MAXN];

int main(){

    cin >> n;

    forr (2 , 1000000 , i)
        if (!d[i])
        {
            x = (ll)i * i;
            while (x <= 1000000)
            {
                d[x] = true;
                x += i;
            }
        }
    d[1] = true;

    forr (1 , n , i)
    {
        cin >> x;
        p = (int)sqrt(x);
        if (p * p == x && !d[p])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }


}
