

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <functional>
#include <string>

using namespace std;

int map[101][101];
int m, n, k;
int vis[101][101];
int cnt;
int dx[] = { 0,1,-1,0 };
int dy[] = { -1,0,0,1 };
vector<int>v;

void dfs(int a, int b) {

	vis[a][b] = 1;
	cnt++;
	for (int i = 0;i < 4;i++) {
		int movex = dx[i] + a;
		int movey = dy[i] + b;
		if (movex >= 0 && movex < m&&movey >= 0 && movey < n) {
			if (map[movex][movey] == 0 && vis[movex][movey] == 0) {
				dfs(movex, movey);


			}


		}


	}



}



int main() {


	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	int x1, x2, y1, y2;
	cin >> m >> n >> k;
	while (k--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1;i < x2;i++) {
			for (int j = y1;j < y2;j++) {
				map[j][i] = 1;

			}
		}

	}
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++) {
			
			if (map[i][j] == 0 && vis[i][j] == 0)
			{
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
			

		}


	}

	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	
	for (int i = 0;i < v.size();i++) {
		cout << v[i] << " ";


	}
	cout << "\n";

	return 0;
}