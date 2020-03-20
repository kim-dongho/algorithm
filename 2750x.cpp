#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	int num;
	int input;
	
	vector<int> sort_num;
	
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		cin >> input;
		sort_num.push_back(input);
	}
	
	sort(sort_num.begin(),sort_num.end());
	
	int length = sort_num.size();
	int sum = 0;
	int mid = sort_num[length/2];
	int scope = 0;
	int mod = sort_num.at(0);
	
	for(int i = 0; i < length; i++)
		sum += sort_num[i];
	
	if(sort_num[0] < 0)
		scope = -sort_num.at(0) + sort_num.at(length-1);
	else
		scope = sort_num.at(0) + sort_num.at(length-1);
	
	for(int i = 0; i < length; i++)
	{
		if(mod == sort_num[i] && mod != sort_num[i+1])
			mod == sort_num[i+1];		
	}
	
	cout << sum/length << endl << mid << endl << mod << endl << scope << endl;
}
