#include <iostream>

const int MAXN = (int)(1e5+1e2);

using namespace std;

int n,a[MAXN],ans,q,d[MAXN];
bool f;

int main()
{
  ios_base::sync_with_stdio(false);
  cin >> n;
  for(int i=1;i<=n;i++)
    cin >> a[i];
  for(int i=2;i<=n;i++)
  {
    d[i]=d[i-2];
    if(a[i]>a[i-1])
      d[i]++;
  }
  for(int i=1;i<=n;i++)
    cout << d[i] << ' ';
  return 0;
}
