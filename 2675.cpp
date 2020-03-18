#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	string num1,num2;
	
	cin >> num1 >> num2;
	
	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
	
	int a = atoi(num1.c_str());
	int b = atoi(num2.c_str());
	
	int max = 0;
	
	if(a > b)
		max = a;
	else
		max = b;
		
	cout << max;
}
