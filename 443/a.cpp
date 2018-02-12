#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll q ,w, ans, n;

int main()
{

	cin >> n;
	cin >> q >> w;
	ans = q;
	for(int i = 2; i <= n;++i)
	{
		cin >> q >> w;
	//a[q]=i;

			for(int j=0;j<=100000;++j)
			{
				if(q+w*j>ans)
				{
					ans = q+w*j;
					break;
				}
			}
			//cout << ans << ' ';

	}
	cout << ans;
	return 0;
}
