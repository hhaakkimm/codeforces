#include <bits/stdc++.h>

#define ll long long
#define fr first
#define mp make_pair
#define pb push_back
#define se second

using namespace std;

const int maxn = 1e5 + 7;

int arr[maxn];

ll n,x,k;

ll ans;

int main(){
	cin>>n>>x>>k;
	for( int i=0;i<n;i++ ){
		cin>>arr[i];
	}

	sort(arr,arr + n);

	for(int i=0;i<n;i++){
		int a = ((int)((arr[i] - 1)/x) + 1)*x;
		int b = a;
		if( k == 0)
			b = arr[i];
		ll r = upper_bound(arr,arr+n,a + k*x  ) - arr;
		ll l = lower_bound(arr,arr+n,b ) - arr;
		ans += r-l;

		if(r == l && k == 0)
			ans++;
	}
	cout<<ans;
	return 0;
}
