#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
	ll n,k,cur=0,a;
	cin >> n >> k;
	deque<int> d;
	for(int i=1;i<=n;++i)
	{
		cin >> a;
		d.push_back(a);
	}
	if(k>=n)
	{
		cout << n;
		return 0;
	}
	while(1)
	{
		if(d[0]>d[1])
		{
			cur++;
			swap(d[0],d[1]);
			d.push_back(d[0]);
			d.pop_front();
			//swap(d[0],d[1]);
		}
		else
		{
			cur=1;
			d.push_back(d[0]);
			d.pop_front();
		}
		if(cur == k)
		{
			cout << d[0];
			return 0;
		}
	}
	return 0;
}
