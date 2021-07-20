#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N,M,count=0;
	cin >> N >> M;
	
	string arr[N];
	string arr2[M];
	vector<string> save_name;
	
	string name;
	for(int i = 0,j = 0; i < N+M; ++i)
	{
		cin >> name;
		if(i < N)
			arr[i] = name;
		else
		{
			arr2[j] = name;
			j++;
		}
	}
	stable_sort(arr,arr+N);
	
	for(int i = 0; i < N; ++i)
	{
		if(upper_bound(arr,arr+N,arr2[i])-lower_bound(arr,arr+N,arr2[i]) == 0)
		{
			count++;
			save_name.push_back(arr2[i]);
		}
	}
	
	cout << count << '\n';
	for(int i = 0; i < count; ++i)
		cout << save_name[i] << '\n';
}
