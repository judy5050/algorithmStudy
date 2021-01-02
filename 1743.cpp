#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include<functional>


using namespace std;

int n, m, k;
int dx[] = { 0,1,-1,0 };
int dy[] = { -1,0,0,1 };
int map[102][102];
int vis[102][102];
int res;
queue<pair<int, int>> q;
int bfs(int x,int y)
{
	int size = 1;
	q.push({ x,y });//Å¥¿¡ »ðÀÔ
	while (!q.empty())
	{
		int nx, ny;
		nx = q.front().first;
		ny = q.front().second;
		vis[nx][ny] = 1;
		q.pop();
		for (int i = 0;i < 4;i++){

			int moveX = nx+dx[i];
			int moveY = ny+dy[i];
			if(moveX>=1&& moveY>=1&&moveX<=100&&moveY<=100)
			{
				if (vis[moveX][moveY] == 0 && map[moveX][moveY] == 1) {
					q.push({ moveX,moveY });
					size++;
					map[moveX][moveY] =size;
					

				}




			}

		}

	}
	




	return size;
}




int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;

	for (int i = 0;i < k;i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
	}

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= k;j++) {
			if (map[i][j] == 1&&vis[i][j]==0)
			{
				//bfs(i, j);
				res = max(res, bfs(i, j));
			}
			

		}

	}


	cout << res << "\n";








	return 0;
}