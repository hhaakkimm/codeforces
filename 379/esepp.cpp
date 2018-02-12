#include <iostream>
#include <string>

using namespace std;

int get(string s)
{
	int summa = 0,k=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		summa=summa+pow(2,k)*(s[i]-'0');
		k++;
	}
	return summa;
}

int main()
{
	string s;
	cin>>s;
	int *ptr;
	*ptr=&get()
	num=get(num);
	cout<<num;	
	return 0;
}