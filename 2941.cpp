#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	string alpha;
	
	getline(cin,alpha);
	
	int length = 0;
	int count = 0;
	
	
	for(int i = 0; i < alpha.size(); i++)
	{
			if(alpha[i] == 'c' && (alpha[i+1] == '=' || alpha[i+1] == '-'))
				i++;
		
			if(alpha[i] == 'd' && alpha[i+1] == 'z' && alpha[i+2] == '=')
				i += 2;
				
			if (alpha[i] == 'd' && alpha[i+1] == '-')
				i++;
			
			if(alpha[i] == 'l' && alpha[i+1] == 'j')
				i++;
		
			if(alpha[i] == 'n' && alpha[i+1] == 'j')
				i++;
		
			if(alpha[i] == 's' && alpha[i+1] == '=')
				i++;
		
			if(alpha[i] == 'z' && alpha[i+1] == '=')
				i++;
				
			count++;
	}	
	cout << count;
}
