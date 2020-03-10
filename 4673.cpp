#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int self(int n)
{
	if(n)
		return self(n) + self(n-1) + self(n%10) + self(n/10);
	else
		return self(n-1) + self(n%10) + self(n/10);
}
int main()
{
	int num;
	
	num = self(10);
	
	cout << num;
}
