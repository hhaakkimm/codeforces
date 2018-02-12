#include <iostream>
#include <string>

using namespace std;

int t,n;
string s;

int main()
{
  cin >> n >> s;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]==s[i+1])
    {
      t++;
    }
  }
  cout << t;
  return 0;
}
