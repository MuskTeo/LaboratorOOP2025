#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<queue>
#include<vector>
using namespace std;
ifstream fin("input.txt");
int main()
{
	string text((istreambuf_iterator<char>(fin)), istreambuf_iterator<char>());
	fin.close();
	for (char& c : text)
		if (!isalpha(c))
			c = ' ';
		else
			c = tolower(c);
	map<string, int> wordCount;
	int pos = 0;
	while (pos < text.size()) {
		while (pos < text.size() && text[pos] == ' ')
			pos++;
		if (pos >= text.size())
			break;
		int next_space = text.find(' ', pos);
		if (next_space == string::npos)
			next_space = text.size();
		string word = text.substr(pos, next_space - pos);
		if (!word.empty())
			wordCount[word]++;
		pos = next_space;
	}
	vector<pair<string, int>>words(wordCount.begin(), wordCount.end());
	sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string, int>& b)
		{if (a.second != b.second)
		return a.second > b.second;
	return a.first < b.first; });
	for (const auto& entry : words) {
		cout << entry.first << "=>" << entry.second << endl;
	}

	return 0;

}
