#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int n, m;
vector<int>v[501];
int vis[501];
int cnt;
void bfs(int node) {


	if (node == 1) {
		for (int i = 0;i < v[node].size();i++) {

			vis[v[node][i]] = 1;
			bfs(v[node][i]);

		}
	}
	else
	{
		for (int i = 0;i < v[node].size();i++) {

			if (vis[v[node][i]] != 1)

				vis[v[node][i]] = 1;
		}

	}




	

}





int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> n >> m;
	int a = 0, b = 0;
	for (int i = 0;i < m;i++) {
	
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);


	}
	bfs(1);

	for (int i = 2;i <= n;i++) {

		if (vis[i] == 1)
			cnt++;
	}



	cout << cnt << "\n";






	return 0;
}