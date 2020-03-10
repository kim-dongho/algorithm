#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int fibonacci(int n)
{
	if(n>=2)
		return fibonacci(n-1) + fibonacci(n-2);
	else if(n==0)
		return 0;
	else if(n==1)
		return 1;
}
int main()
{	
	int n;
	
	cin >> n;
	
	int ab = fibonacci(n);
	
	cout << ab;
}
