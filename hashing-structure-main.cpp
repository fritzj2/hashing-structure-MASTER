// This program was designed to explore hashing in C++
// By Dr. Jan Pearce

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	vector<string> words = { "apple", "banana", "orange", "grape", "apple", "kiwi", "melon", "banana", "pear", "peach",
		"cherry", "apple", "plum", "mango", "grape", "lemon", "lime", "banana", "orange", "fig",
		"date", "kiwi", "melon", "apple", "papaya", "pear", "grape", "cherry", "banana", "mango" };

	unordered_map<string, int> wordCount;
	while (!words.empty()){

	
	return 0;
	}
/*	// Create an empty unordered_map
	unordered_map<char, string> grademap;

	// Insert elements in map
	grademap.insert({ 'A', "excellent" });
	grademap.insert({ 'B', "good" });
	grademap.insert({ 'C', "average" });
	grademap.insert({ 'D', "poor" });
	grademap.insert({ 'F', "failing" });

	// Iterate Over the unordered_map and display elements
	// Note that this is a WEIRDLY ABNORMAL thing to do with a hash map
	cout << "Hashmap contents:" << endl;
	for (pair<char, string> element : grademap)
		cout << element.first << "\t" << element.second << endl;
	cout << endl;

	char key = 'N';

		

	// If key not found in map iterator to end is returned 
	if (grademap.find(key) == grademap.end())
		cout << key << " not found\n\n" << endl;
	// If key found then iterator to that key is returned 
	else
		cout << "Found " << key << "\n\n";

	//add grades
	grademap.insert({ 'I', "incomplete" });
	grademap.insert({ 'W', "withdrew" });

	key = 'W';

	// If key not found in map iterator to end is returned 
	if (grademap.find(key) == grademap.end())
		cout << key << " not found\n\n";
	// If key found then iterator to that key is returned 
	else
		cout << "Found " << key << "\n\n";

	// Overwrite value of an element
	grademap['C'] = "competent";

	// Iterate Over the unordered_map and display elements
	// Iterate Over the unordered_map and display elements
	// Note again that this is a WEIRDLY ABNORMAL thing to do with a hash map!
	cout << "Hashmap contents:" << endl;
	for (pair<char, string> element : grademap)
		cout << element.first << "\t" << element.second << endl;

	char enter;
	cin >> enter;*/

	return 0;
}