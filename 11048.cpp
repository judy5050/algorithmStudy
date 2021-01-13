#include<vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <functional>
#include <iostream>

using namespace std;

int n, m;
int map[1001][1001];
int dp[1001][1001];
int main() {

	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> n>> m;
	for (int i = 1;i <= n;i++) { //map 만드는 배열
		for (int j = 1;j <= m;j++) {
			cin >> map[i][j];
		}
	}
	for (int j = 1;j <= m;j++) {
		dp[1][j] = map[1][j]+dp[1][j-1];
	}
	for (int i = 1;i <= n;i++) {
		dp[i][1] = map[i][1]+dp[i-1][1];
	}

	for (int i = 2;i <= n;i++) {
		for (int j = 2;j <= m;j++)
		{
			dp[i][j] = max(dp[i - 1][j], max(dp[i][j - 1],dp[i-1][j-1]))+map[i][j];
		}
	}



	cout << dp[n][m] << "\n";








	return 0;
}