#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>


using namespace std;

vector<pair<int, int>>v;
vector<int>val[101];
int res;
int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	
	int N;
	cin >> N;
	while (N--) {
		int a, b;
		cin >> a >> b;
		v.push_back({ b,a });//점수 기준으로 내림차순


	}
	sort(v.begin(), v.end(),greater<pair<int,int>>());
	for (int i = 0;i < v.size();i++) {
		//cout << v[i].first << ' ' << v[i].second << "\n";
		int idx = 0;
		idx = v[i].second;//두번째 값이 날짜
		if (val[idx].empty())
		{
			val[idx].push_back(v[i].first);
			res += v[i].first;
		}
		else {
			while ((idx-1) > 0) {
				idx--;
				if (val[idx].empty()) {
					val[idx].push_back(v[i].first);
					res += v[i].first;
					break;
				}
			}



		}
		

	}

	cout << res << "\n";




	return 0;
}