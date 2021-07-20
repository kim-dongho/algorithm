#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(string a, string b)
{
	if(a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	vector<string> v;
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		string s;
		bool check = false;
		cin >> s;
		
		for(int j = 0; j < v.size(); j++)
		{
			if(v[j] == s)
				check = true;
		}
		
		if(check == false)
			v.push_back(s);
	}
	
	stable_sort(v.begin(),v.end(),comp);
	
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
