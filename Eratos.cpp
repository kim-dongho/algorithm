#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	int number;
	cin >> number;
	
	bool prime[number];
	int lenght = sizeof(prime);
	
	memset(prime,false,lenght);
	
	for(int i = 2; i <= lenght; i++)
	{
		if(prime[i]==true) continue;
		
		for(int j = i+i; j <= lenght; j+=i){
			prime[j] = true;
		}
	}
	
	int cnt = 0;
	
	for(int i = 2; i <= lenght; i++)
	{
		if(prime[i]==false)
			cnt++;
	}
	
	cout << "a prime number up to " << number << " = " << cnt;
}
