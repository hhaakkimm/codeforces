#include <iostream>
#include <string>

using namespace std;

int t,n;
string s,q,w;

int main()
{
  cin >> s;
  for(int i=0;i<s.length();i++)
  {
    if(islower(s[i]))
      t++;
    q+=tolower(s[i]);
    w+=toupper(s[i]);
  }
  if(t>=s.length()-t)
    cout << q;
  else
    cout << w;
  return 0;
}
