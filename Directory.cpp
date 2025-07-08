#include <iostream>
#include <filesystem>
#include <string>
using namespace std;

string getInput(const string &prompt) {
	cout << prompt;
	string input;
    getline(cin, input);
    return input;
}
