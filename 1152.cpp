#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	string st;

	getline(cin,st);
	
	int count = 0;
	
	if(st.at(0) == ' ')
		count = 0;
	else
		count = 1;
		
	int length = st.size();
	
	for(int i = 0; i < length; i++)
	{
		if(st.at(i)==' ')
			count++;
	}
	
	if(st.at(length-1) == ' ')
		count--;
	
	cout << count;
}
