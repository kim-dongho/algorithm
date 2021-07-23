#include <iostream>
#include <cmath>
using namespace std;

int mod = 1234567891;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	int L;
	long long answer = 0;
	long long tmp = 1;
	cin >> L;
	cin >> s;

	for(int i = 0; i < L; ++i)
	{	
		int num = 0;
		num = s[i] - 96;
		
		answer += num * tmp % mod;
		tmp *= 31;
		tmp %= mod;
		
	}
	answer %= mod;
	
	cout << answer << '\n';
}
