#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;
int dp[1000001];

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	memset(dp, 10000000, sizeof(dp));
	dp[0] = dp[1] = 0;
	
	int n;
	cin >> n;
	for (int i = 2;i <= n;i++) {
		dp[i] = dp[i - 1] + 1;
		if (n % 2 == 0) {
			dp[i]=min(dp[i], dp[i / 2] + 1);
		}

		if (n % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}

	}

	cout << dp[n] << "\n";





	return 0;
}
