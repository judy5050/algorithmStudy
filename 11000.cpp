#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;


int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	priority_queue<int, vector<int>, greater<int>>q;
	int res = 1;
	int N;
	vector<pair<int,int>>v;
	vector<int>idx;
	cin >> N;
	while (N--) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });

	}
	q.push(v[0].second);
	

	for (int i = 1;i < v.size();i++) {
		if (q.top() > v[i].first)
		{
			
			q.push(v[i].second);
			
		}
		else if(q.top()<=v[i].first) {
			q.pop();
			q.push(v[i].second);
			
		}

	}

	cout << q.size() << "\n";

	return 0;
}