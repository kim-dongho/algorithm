#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	string g;
	int count = 0;
	
	cin >> n;
	cin.ignore();
		
	for(int i = 0; i < n; i++)
	{
		int non_group_count = 0;
		getline(cin,g);
		int length = g.size();
		
		for(int j = 0; j < length; j++)
		{
			for(int k = j+2; k < length; k++)
			{
				if(g.at(j) != g.at(j+1))
				{
					if(g.at(j) == g.at(k))
					{
						non_group_count += 1;
						break;
					}
				}
			}
		}
		
		if(non_group_count == 0)
			count += 1;
	}
	
	cout << count;
}
