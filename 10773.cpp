#include <stack>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,num,sum = 0;
	stack<int> s;
	cin >> N;
	
	for(int i = 0; i < N; ++i)
	{
		cin >> num;
		if(num == 0)
		{
			sum -= s.top();
			s.pop();
		}
		else
		{
			s.push(num);
			sum += num;
		}
	}
	
	cout << sum << '\n';
}
