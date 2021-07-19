#include <iostream>
#include <vector>
#include <cctype>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int pokemon_num, question_num;
	cin >> pokemon_num >> question_num;
	
	string pokemon, question;
	map<string,int> poke;
	string poke2[100001];
	
	for(int i = 0; i < pokemon_num; ++i)
	{
		cin >> pokemon;
		poke.insert(pair<string,int>(pokemon,i));
		poke2[i] = pokemon;
	}
	
	for(int i = 0; i < question_num; ++i)
	{
		cin >> question;
		string s = question;

		if(isdigit(s[0]))
			cout << poke2[stoi(question)-1] << '\n';
		else
			cout << poke[s]+1 << '\n';
	}
}
