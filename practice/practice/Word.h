#pragma once
#include <map>
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Word {
private:
	string word;
public:
	Word(string word) {
		this->word = word;
	}
	string getWord() {
		return this->word;
	}
};