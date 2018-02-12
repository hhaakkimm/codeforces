#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int MAXN = (int)(2e5+1e1);

set<int> s;
int n,a[MAXN],p[MAXN],us[MAXN];

int main() {
  cin>>n;
  for (int i = 1; i <= n; i++) {
    s.insert(i);
  }
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    p[a[i]]++;
    s.erase(a[i]);
  }

  cout << s.size() << '\n';

  for (int i = 1; i <= n; i++)
  {
    if( p[a[i]] > 1)
    {
      int k = * s.begin();
      if(k < a[i] || us[a[i]])
      {
        p[a[i]]--;
        a[i] = k;
        s.erase(k);
      }
      else
        us[a[i]] = 1;
    }

  }




  for (int i = 1; i <= n; i++)
    cout << a[i] << ' ';
  return 0;
}
