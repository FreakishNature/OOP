#include <iostream>
#include <map>
#include <unordered_map>
#include <functional>
#include <string>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <set>
using namespace std;

struct sortFunctor {
	bool operator()(const pair<string, int> &a, const pair<string, int> &b) {
		return a.second > b.second;
	}
};

bool sortFunction(const pair<string, int> &a, const pair<string, int> &b) {
	return a.second > b.second;
}

bool isEndingChar(char ch) {
	return ch == '?' || ch == '!' || ch == '.';
}

int calculateNumberOfSentances(string bigText) {
	char lastCh = 'a';
	int sentanceCounter = 0;
	for (char ch : bigText) {
		if (isEndingChar(ch) && lastCh != '.') {
			sentanceCounter++;
		}

		lastCh = ch;
	}
	return sentanceCounter;
}

vector<string> stringSplit(string bigText) {
	vector<string> vectorOfStrings;
	string tmpText = bigText;
	//auto it = tmpText.begin();
	for (int i = 0, j = 0; i < bigText.length(); i++, j++) {

		if (isspace(bigText[i]) || bigText[i] == '?' || bigText[i] == '!' || bigText[i] == '.') {
			//vectorOfStrings.push_back();
			vectorOfStrings.push_back(tmpText.substr(0, j));
			tmpText.erase(0, j);
			j = 0;
		}
	}

	vectorOfStrings.push_back(tmpText);

	for (string &str : vectorOfStrings) {
		str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
		str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
		str.erase(std::remove(str.begin(), str.end(), '?'), str.end());
		str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
		str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

	}



	return vectorOfStrings;
}

map<string, int> detectMostRecentWord(string bigText) {
	vector<string> splitedText = stringSplit(bigText);
	map<string, int> wordsCounter;
	for (auto str : splitedText) {
		if (wordsCounter.find(str) == wordsCounter.end()) {
			wordsCounter[str] = 1;
		}
		else {
			wordsCounter[str]++;
		}
	}

	wordsCounter.erase("");

	return wordsCounter;
}

int main() {
	string bigText;// = "111 222 333 444. 111 111 111 333! 333 666 44 33 44";

	cout << "Enter big text : " << endl;

	getline(std::cin, bigText);
	
	map<string, int> checkSentance = detectMostRecentWord(bigText);
	
	cout << "Number of sentances : " << calculateNumberOfSentances(bigText) << endl;
	cout << "Number of words : " << checkSentance.size() << endl;
	
	multiset<pair<string, int>, sortFunctor> sortedWords(checkSentance.begin(),checkSentance.end());


	//unordered_map<string, int> mapSortedByValue = sortMapByValue(checkSentance);
	int i = 0;
	for ( auto word : sortedWords) {
		i++;
		cout << i << ") - Key : " + word.first << "\t number of repeations :  " << word.second << endl;
		if (i >= 5) {
			break;
		}
	}

	

	system("pause");
	return 0;
}