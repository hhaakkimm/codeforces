#include <iostream>
#include <string>

using namespace std;

int t,n;
string s;

int main()
{
  cin >> n >> t >> s;
  for(int tt=1;tt<=t;tt++)
  {
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='B' && s[i+1]=='G')
      {
        swap(s[i],s[i+1]);
        i++;
      }
    }
  }
  cout << s;
  return 0;
}
