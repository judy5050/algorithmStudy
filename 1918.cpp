
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
int main() {

	cin.tie(0);
	cout.tie(0);
	std::ios::sync_with_stdio(false);

	string str;
	stack<char>out;
	cin >> str;
	for (int i = 0;i<str.size();i++) {
		
		 if (str[i] == '+' || str[i] == '-') {
			if (!out.empty())
			{
				if (out.top() == '*' || out.top() == '/')
				{
					cout << out.top();
					out.pop();
					out.push(str[i]);
				}

			}
			else {
				out.push(str[i]);
			}
		}
		else if (str[i] == '*' || str[i] == '/') {

			if (!out.empty() && (out.top() == '+' || out.top()== '-')) {
				cout << out.top();
				out.pop();
				out.push(str[i]);

			}
			else {
				out.push(str[i]);
			}

		}
		else if (str[i] == '(') {
			out.push(str[i]);
		}
		else if (str[i]==')'){
			while (!out.empty()&&out.top()!='(' ) {
				cout << out.top();
				out.pop();
			}
			out.pop();

	}
		else {
			out.push(str[i]);
		}
	}



	while (!out.empty()) {

		cout << out.top();
		out.pop();
	}

	cout << "\n";


	return 0;
}



/*
#include <stack>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string str;
int a;
stack<char>s;
int main()
{
	cout.tie(0);
	cin.tie(0);
	std::ios::sync_with_stdio(false);
	cin >> str;
	int cnt = 0;

	for (int i = 0;i < str.size();i++)
	{
		if (str[i] == '*' || str[i] == '/')
		{
			if (!s.empty())
			{
				if (s.top() == '*' || s.top() == '/')
				{
					cout << s.top();
					s.pop();
				}

			}
			s.push(str[i]);


		}
		else if (str[i] == '+' || str[i] == '-')
		{
			if (s.empty())
				s.push(str[i]);
			else
			{
				while (!s.empty())
				{
					if (s.top() == '(') break;
					cout << s.top();
					s.pop();


				}
				s.push(str[i]);

			}


		}
		else if (str[i] == '(')
		{
			s.push(str[i]);
		}
		else if (str[i] == ')')
		{
			while (s.top() != '(')
			{
				cout << s.top();
				s.pop();
			}
			s.pop();
		}
		else
		{
			cout << str[i];
		}

	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}









	return 0;
}*/