#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;
int main() {

	vector<int>v1,v2;
	for (int i = 0;i < 10;i++) {
		int a;
		cin >> a;
		v1.push_back(a);


	}// 10╧Ь ют╥б
	for (int j = 0;j < 10;j++) {
		int b;
		cin >> b;
		v2.push_back(b);
	}
	sort(v1.begin(), v1.end(),greater<int>());
	sort(v2.begin(), v2.end(),greater<int>());
	int w=0;
	int k=0;
	for (int i = 0;i < 3;i++) {
		w += v1[i];
		k += v2[i];


	}
	cout << w << " " << k<<"\n";









	return 0;
}