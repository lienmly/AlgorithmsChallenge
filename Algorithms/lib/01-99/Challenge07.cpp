//=============================================
// 
// Lien Ly 
// Challenge from firecode.io 
// 
// FirstNoneDuplicate.cpp
//=============================================
#include "Challenge07.h"
#include <map>

char FND::first_non_repeating(string str)
{
	map<int, int> strMap = {};

	for (int i = 0; i < str.size(); i++) {
		if (strMap.find(str[i]) == strMap.end()) {
			strMap.insert(pair<int, int>(str[i], 1));
		}
		else {
			strMap.find(str[i])->second++;
		}
	}

	for (auto const &iter : strMap) {
		if (iter.second == 1)
			return iter.first;
	}
	return '0';
}
