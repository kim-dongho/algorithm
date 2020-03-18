#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void (vector<int> array, vector<vector<int> > commands) 
{
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        vector<int> commands1;
        vector<int> commands2;
        
        for(int j = 0; j < 3; j++)
        {
            commands1.push_back(commands[i][j]);
        }
                
        for(int k = commands1.at(0); k <= commands1.at(1); k++)
        {
            commands2.push_back(array.at(k-1));
        }
        sort(commands2.begin(),commands2.end());
        
        int count = commands2.at(commands1.at(2)-1);
        commands1.clear();
        commands2.clear();
        answer.push_back(count);
    }
    for(int i = 0; i < answer.size(); i++)
    	cout << answer.at(i);
}
int main()
{
	vector<int> array;
	vector<vector<int> > commands(3,vector<int>(3,0));
	array.push_back(1);
	array.push_back(5);
	array.push_back(2);
	array.push_back(6);
	array.push_back(3);
	array.push_back(7);
	array.push_back(4);

	commands[0][0] = 2;
	commands[0][1] = 5;
	commands[0][2] = 3;
	commands[1][0] = 4;
	commands[1][1] = 4;
	commands[1][2] = 1;
	commands[2][0] = 1;
	commands[2][1] = 7;
	commands[2][2] = 3;
	
	solution(array,commands);
}
