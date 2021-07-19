#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int number,chk_number,count = 1;
	cin >> number;
	chk_number = number;
	
	while(1)
	{
		int front = 0,back = 0;
		if(chk_number > 9)
		{
			front = chk_number / 10;
			back = chk_number % 10;
			if(front + back > 9)
				chk_number = (back * 10) + ((front+back) % 10);
			else
				chk_number = (back * 10) + (front + back);
		}
		else
		{
			chk_number = (chk_number*10) + chk_number;
		}

		if(number == chk_number)
			break;
		else
			count++;
		
	}
	
	cout << count << '\n';
}
