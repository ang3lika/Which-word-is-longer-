
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string word1;
	string word2;

	cout << "Hi, choose 2 words and write bellow :)" << endl;
//enter first word
	cout << "First word: ";
	getline(cin, word1);

// enter second word
	cout << "Second word: ";
	getline(cin, word2);
	cout << endl;

	int w1 = word1.length();
	int w2 = word2.length();

	// 1. w1==w2 2. w1>w2 3. w1<w2


	if (w1 == w2) {

		cout << "These words: " << "\"" + word1 + "\"" << ","
			<< "\"" + word2 + "\" have an equal length of characters which is " << w1 << endl;
	}
	if (w1 > w2)
	{
		cout << "The first word is longer than the second." << "\"" + word1 + "\" is "
			<< w1 << " characters long and " << "\"" + word2 + "\" is "
			<< w2 << " characters long." << endl;


	}
	if (w1 < w2)
	{
		cout << "The second word is longer than the first." << "\"" + word2 + "\" is "
			<< w2 << " characters long and " << "\"" + word1 + "\" is "
			<< w1 << " characters long." << endl;
	}


	return 0;
}