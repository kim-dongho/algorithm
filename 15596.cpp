#include <vector>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for(int i = 0; i < a.size(); i++)
		ans += a.at(i);
	return ans;
}

int main()
{
	vector<int> a;
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}

	int ans = sum(a);
	
	cout << ans;
}
