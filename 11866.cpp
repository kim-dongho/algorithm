#include <queue>
#include <iostream>
using namespace std;

int main()
{
	queue<int> q;
	queue<int> answer;
	int num, num2;
	cin >> num >> num2;
	
	for(int i = 1; i <= num; i++)
		q.push(i);
	
	int key = 0;
	while(!q.empty())
	{
		for(int i = 0; i < num2-1; i++)
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		answer.push(q.front());
		q.pop();
	}
	
	cout << "<";
	while(!answer.empty())
	{
		if(answer.size() == 1)
			cout << answer.front();
		else
			cout << answer.front() << ", ";
		
		answer.pop();
	}
	cout << ">" << endl; 
}
