#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	int N, K;
	int res = 0;
	vector<int> v;
	cin >> N >> K;
	for (int i = 0;i < N;i++) {
		int input;
		cin >> input;
		v.push_back(input);


	}
	int total=K;
	for (int i = N - 1;i >= 0;i--) {
		
		if (total / v[i] != 0) {
			res += (total / v[i]);
			total -= (total / v[i])*v[i];
		}

	}



	cout << res << "\n";


	return 0;
}