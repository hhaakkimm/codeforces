#include <iostream>
#include <vector>
using namespace std;
const int INF = (int)(2e9);

int main() {
	//freopen("secretroom.in", "r", stdin);
	//freopen("secretroom.out", "w", stdout);

	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]), a[i] += i;

	vector<int> dp(n + 1, INF);
	dp[0] = -INF;
	for (int i = 0; i < n; i++) {
		int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
		cout << a[i] << ' ' << j << '\n';
		if (dp[j - 1] < a[i]) dp[j] = a[i];
	}
	for (int i = 0; i < n; i++) //if (dp[i] != INF) {
		// printf("%d\n", i);
		// break;
		cout << dp[i] << ' ';
	

	return 0;
}
