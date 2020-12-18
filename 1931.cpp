#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
 
using namespace std;
vector<pair<int, int>>v;

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int a, b;
	while (N--) {
		
		cin >> a >> b;
		v.push_back({ b,a });//일단 끝나는 시간 기준으로 정렬

	}
	sort(v.begin(), v.end());
	int idx = v[0].first;//맨 앞 끝나는 시간
	int res=1;
	for (int i = 1;i < v.size();i++)
	{
		//cout << v[i].first << v[i].second << "\n";
		if (idx<=v[i].second)
		{
			res++;
			idx = v[i].first;
		}


	}
	cout << res << "\n";

	return 0;
}