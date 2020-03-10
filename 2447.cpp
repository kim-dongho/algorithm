#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

char arr[2190][2190];

void star(int num,int a,int b)
{
	if(num == 1){
		arr[a][b] = '*';
		return;
	}
		
	else
	{
		num = num / 3;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				if(i==1 && j==1)
					continue;
				else
					star(num,a+(num*i),b+(num*j));
			}
		}
	}
}
int main()
{
	memset(arr,' ',sizeof(arr));
	
	int num;
	cin >> num;
	
	star(num,0,0);
	
	for(int i = 0; i < num; i++)
	{
		for(int j = 0; j < num; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}
