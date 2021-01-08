#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
int n;
int map[101][101];
int res;
int height;
int vis[101][101];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int cnt;
int s;
vector<int>v;
void dfs(int h,int x, int y) {
	vis[x][y] = 1;
	for (int i = 0;i < 4;i++) {
		int movex = dx[i] + x;
		int movey = dy[i] + y;
		if (movex >= 0 && movex < n&&movey >= 0 && movey < n) {
			if (vis[movex][movey] == 0&&h<map[movex][movey]) {
				dfs(h,movex, movey);

			}

		}


	}
	

}

int main() {

	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> n;
	for (int i = 0;i < n;i++) { //높이 입력
		for (int j = 0;j < n;j++) {

			cin >> map[i][j];
			height = max(height, map[i][j]);//입력 값 중 가장 높은 높이 확인
			
		
		}

	}


	for (int i = height;i >= 0;i--) {
		memset(vis, 0, sizeof(vis));
		for (int j = 0;j < n;j++) {
			for (int k = 0;k < n; k++) {
				if (vis[j][k] == 0&&map[j][k]>i)
				{
					dfs(i, j, k);
					cnt++;
				}

				
				

			}


			
		}

		res = max(res, cnt);
		cnt = 0;

	}







	cout << res << "\n";





	return 0;
}

