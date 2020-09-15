//Program to check whether a given string is Anagram.
//Leetcode

#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t) {
		cout << "compare" << s.compare(t);
		bool val = true;
        if(s.length() != t.length()) {
            val = false;
            cout << "inside top if";
        }
        if(s.compare(t) == 0) {
            val = true;
            cout<< "indide if";
        } else {
            val = false;
            cout << "inside elese";
        }
        return val;
    }
    
int main() {
	string s = "anagram";
	string t= "naagram";
	cout << isAnagram(s, t);
	return 0;
}
