#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#include <cstring>
#include <string>
using namespace std;

int n;
char map[102][102];
int vis[102][102];
int cnt;
vector<int>v_j;//적록색약이 아닌사람
vector<int>v_g;//적록색약인 사람
queue<pair<int, int>>q;
int dx[] = { 0,1,-1,0 };
int dy[] = { -1,0,0,1 };

void bfs_j(int a, int b,char color) {
	q.push({ a,b });
	vis[q.front().first][q.front().second] = 1;//방문 여부 확인
	while (!q.empty())
	{
		cnt++;
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0;i < 4;i++) {
			int movex = x + dx[i];
			int movey =y + dy[i];
			
			if (movex >= 0 && movex < n&&movey >= 0 && movey < n) {
				if (map[movex][movey] == color&&vis[movex][movey] == 0) {
					q.push({ movex,movey });
					vis[movex][movey] = 1;
				}

			}
		}
	
	}
	



}

void bfs_g(int a, int b, char color) {
	q.push({ a,b });
	vis[q.front().first][q.front().second] = 1;//방문 여부 확인
	while (!q.empty())
	{
		cnt++;
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0;i < 4;i++) {
			int movex = x + dx[i];
			int movey = y + dy[i];

			if (movex >= 0 && movex < n&&movey >= 0 && movey < n) {
				if (color == 'R' || color == 'G') {
					if ((map[movex][movey] == 'R' || map[movex][movey] == 'G') && vis[movex][movey] == 0) {
						q.push({ movex,movey });
						vis[movex][movey] = 1;
					}

				}
				else if (color == 'B') {
					if (map[movex][movey] == color&& vis[movex][movey] == 0) {
						q.push({ movex,movey });
						vis[movex][movey] = 1;
					}



				}
			}

		}




	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> n;
	for (int i = 0;i < n;i++) {//문자열 배열에 저장
		string str;
		cin >> str;
		for (int j = 0;j < str.size();j++)
		{
			map[i][j] = str[j];

		}


	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (vis[i][j] == 0) {
				bfs_j(i, j, map[i][j]);
				v_j.push_back(cnt);
				cnt = 0;
			}
		}
	}

		memset(vis, 0, sizeof(vis));
		
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				if (vis[i][j] == 0) {
					bfs_g(i, j, map[i][j]);
					v_g.push_back(cnt);
					cnt = 0;
				}



			}






		}
		
		cout << v_j.size() << " ";
		
		cout << v_g.size() << "\n";




		return 0;
	
}