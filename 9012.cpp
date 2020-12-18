#include <iostream>
#include <stack>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

using namespace std;




int main() {

	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	int N = 0;
	int flag = 0;
	cin >> N;
	
	while (N--) {
		string input;
		stack<char>s;
		cin >> input;
		flag = 0;
		for (int i = 0;i < input.size();i++)
		{
			if (input[i] == '(')
			{
				s.push(input[i]);
			}
			else if (input[i] == ')') {
				if (!s.empty()&&s.top() == '(') {
					s.pop();
				}
				else if (s.empty())
				{
					flag = 1;
					break;
				}

			}





		}
		if (flag == 1||!s.empty()) {
			cout << "NO" << "\n";

		}
		else {
			cout << "YES" << "\n";
		}


		}
		

	




	return 0;
}
