#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <functional>
#include <string>
using namespace std;
int n;
int map[26][26];
int vis[26][26];
vector<int>v;
int cnt;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
void dfs(int a, int b) {
	vis[a][b] = 1;
	cnt++;
	for (int i = 0;i < 4;i++) {
		int moveX = dx[i] + a;
		int moveY = dy[i] + b;
		if (moveX >= 0 && moveX < n&&moveY >= 0 && moveY < n) {
			if (vis[moveX][moveY] == 0&&map[moveX][moveY]==1) {
				dfs(moveX, moveY);

			}

		}

	}


}

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> n;
	for (int i = 0;i < n;i++) {
			string temp;
			cin >> temp;
			for (int j = 0;j < temp.size();j++) {
				map[i][j] = temp[j] - '0';

			}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] == 1 && vis[i][j] == 0) {
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;

			}




		}


	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0;i < v.size();i++) {
		cout << v[i] << "\n";
	}

	return 0;
}