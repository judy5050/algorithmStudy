#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {

	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);
	int L=1, P=1, V=1;
	int res = 0;
	int num = 1;
	while (true) {
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) break;
		int val1, val2;
		val1 = ((V / P)*L);
		val2 = V%P;
		if (val2 > L) {
			val2 = L;
		}
		cout << "Case " << num << ": " <<val1+val2<<"\n";
		num++;
	}








	return 0;
}
