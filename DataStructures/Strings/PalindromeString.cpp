//not complete
//This program is to check whether a given string is palindrome or not.
//LeetCode Question

#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;

	string reverseString(string s) {
        char temp;
        int len = s.size()-1;
        for(int i=0; i<=len/2; i++) {
        	
            temp = s[i];
            cout << s[i] << "  " << temp<< "  "<< s[len-i]<<endl;
            s[i] = s[len-i];
            s[len-i]= temp;
        }
//        transform(s.begin(), s.end(), s.begin(), ::tolower());
        return s;
    }

	bool isPalindrome(string s) {
        for(int i=0; i<s.length(); i++){
            if(s[i]<'A' || s[i]>'Z' && s[i]<'a' || s[i]>'z') {
                s.erase(i,1);
                i--;
            } else {
            	char c = s[i];
            	s[i] = tolower(c);
			}
        }
        cout << "string is   " << s << endl;
        if(s.length() == 1) {
        	return true;
		}
        
        
        string newString = reverseString(s);
        cout << "newSring   " << newString << endl;
//        transform(s.begin(), s.end(), s.begin(), ::tolower());
        if(newString.compare(s) == 0) {
            return true;
        } else {
            return false;
        }
    }
    
    
	
	int main() {
		string s= " ";
		cout << isPalindrome(s);
		return 0;
	}
    
