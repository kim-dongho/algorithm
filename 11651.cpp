#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
	if(a.second == b.second)
		return a.first < b.first;
		
	return a.second < b.second;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N,X,Y;
	vector<pair<int,int>> v;
	cin >> N;

	for(int i = 0; i < N; ++i)
	{
		cin >> X >> Y;	
		v.push_back(make_pair(X,Y));
	}
	
	stable_sort(v.begin(),v.end(),comp);
	
	for(int i = 0; i < N; ++i)
		cout << v[i].first << ' ' << v[i].second << '\n';
}
