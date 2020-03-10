#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int arr[9];
	
	for(int i = 0; i < 9; i++)
		cin >> arr[i];
		
	int max = 0,count = 0;
	
	for(int i = 0; i < 9; i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	
	for(int i = 0; i < 9; i++)
	{
		if(arr[i]==max)
			count = ++i;
	}
	
	cout << max << endl << count;
}
