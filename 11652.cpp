#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

long long card[1000000];
long long res;
int m=1;
int cnt=1;
int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a;
	cin >> a;
	for (int i = 0;i < a;i++) {
		int index=0;
		cin >> card[i];
	}
	res = card[0];
	sort(card, card + a);
	
	for (int i = 1;i < a;i++) {
		if (card[i - 1] == card[i])
		{
			cnt++;
			
		}
		else {
			cnt = 1;
		}
		if (cnt > m) {
			m = cnt;
			res = card[i];
		}
		
		
		

	}


	cout << res << "\n";



	return 0;
}