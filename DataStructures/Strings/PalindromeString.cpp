//not complete
//This program is to check whether a given string is palindrome or not.
//LeetCode Question

#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <cstring>
#include<ctype.h>
using namespace std;

	bool isPalindrome(string s) {
		if(s == "") {
			return true;
		}
        for(int i=0; i<s.length(); i++){
            if ((s[i] < 'A' || s[i] > 'Z' && 
			s[i] < 'a' || s[i] > 'z') && (!isdigit(s[i]))) 
		{ 
			// erase function to erase 
			// the character 
			s.erase(i, 1); 
			i--; 
		}
		if(isalpha(s[i])){
			s[i] = tolower(s[i]);
		} 
        }
        cout << "string is   " << s << endl;
        if(s.length() == 1) {
        	cout << "inside ." << s.length();
        	return true;
		}
//		s.erase(remove(s.begin(), s.end(), ' '), s.end());
//		cout << " new string    " << s << endl;
		int len=s.length();
		for(int i=0; i<len; i++) {
			
			if(s[i] != s[len-i-1]) {
				return false;
			}
		}
		return true;
    }
    
    
	
	int main() {
		string s=   ".";// " ";//"A man, a plan, a canal: Panama";//"......a.....";     //"A man, a plan, a canal: Panama";        //"a.0";
		cout << isPalindrome(s);
		return 0;
	}
    
