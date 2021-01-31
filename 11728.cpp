#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int a_size;
int b_size;
vector<int>result;

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a_size >> b_size;
	for (int i = 0;i < a_size;i++) {
		int num = 0;
		cin >> num;
		result.push_back(num);

	}
	for (int i = 0;i < b_size;i++) {
		int num = 0;
		cin >> num;
		result.push_back(num);

	}

	sort(result.begin(), result.end());

	for (int i = 0;i<result.size();i++) {

		cout << result[i] << " ";

	}
	cout << "\n";

	return 0;
}