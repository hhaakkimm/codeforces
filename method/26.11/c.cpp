#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t,n;
string s,q,w;
char c;
vector<int> v;

int main()
{
  t=1;
  while(cin>>c)
  {
    if(t%2==1)
    {
      v.push_back(c-'0');
    }
    t++;
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size()-1;i++)
    cout << v[i] << '+';
  cout<<v[v.size()-1];  
  return 0;
}
