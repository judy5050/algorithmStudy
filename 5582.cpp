#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

string str1;
string str2;
int dp[4001][4001];



int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> str1;
	cin >> str2;
	int res = 0;
	for (int i = 0;i<str1.size();i++) {
		for (int j = 0;j<str2.size();j++) {

			if (str1[i] == str2[j]) {
				if (i == 0 ||j == 0) {
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				
				res = max(res, dp[i][j]);



			}

		}

	}

	cout << res << "\n";










	return 0;
}