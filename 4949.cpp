#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	
	while(1)
	{
		stack<char> st;
		bool check = true;
		getline(cin,s);		
		if(s[0] == '.')
				break;
				
		int len = s.size();
		
		for(int i = 0; i < len; ++i)
		{
			if(s[i] == '(' || s[i] == '[')
				st.push(s[i]);
			
			else if(s[i] == ')')
			{
				if(st.empty())
					check = false;
				else if(st.top() == '(')
					st.pop();
				else if(st.top() == '[')
					check = false;
			}
			else if(s[i] == ']')
			{
				if(st.empty())
					check = false;
				else if(st.top() == '(')
					check = false;
				else if(st.top() == '[')
					st.pop();
			}
		}
		if(!st.empty())
			check = false;
		
		if(check)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}
