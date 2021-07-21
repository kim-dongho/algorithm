#include <iostream>
using namespace std;

int cnt[10001] = {0};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N,num;
	cin >> N;
	
	for(int i = 0; i < N; ++i)
	{
		cin >> num;
		cnt[num]++;
	}
	
	for(int i = 1; i < 10001; ++i)
	{
		for(int j = 0; j < cnt[i]; ++j)
		{
			cout << i << '\n';
		}
	}
}
