#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int arr[10] = { 0 };
	int a,b,c,sum;
	
	cin >> a >> b >> c;
	
	sum = a*b*c;
	
	while(sum > 0)
	{
		arr[(sum%10)]++;
		sum = sum/10;
	}
	
	for(int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}
