#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	vector<int>v;
	int N, L;
	int res=0;
	cin >> N >> L;
	for (int i = 0;i < N;i++) {
		int pos;
		cin >> pos;
		v.push_back(pos);



	}
	sort(v.begin(), v.end());
	int a;
	int count = 0;
	a = v[0];
	for (int i = 0;i < v.size();i++) {
		if (v[i] - a < L) continue;
		else if (v[i] - a >= L) {
			res++;
			a=v[i];
		}
	}



	cout << res+1 << "\n";




	return 0;
}