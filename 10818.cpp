#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	int arr[num];

	for(int i = 0; i < num; i++)
		cin >> arr[i];
		
	int max = 0,min = 0;
	
	max = min = arr[0];
	
	for(int i = 1; i < num; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	
	cout << min << ' ' << max;
}
