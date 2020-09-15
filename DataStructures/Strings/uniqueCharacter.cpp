//Program to find the index value of first occurence of unique character in a strng
//Leetcode

#include<iostream>
#include<string>
using namespace std;

int uniqueString(string s) {
	char word;
        int pos=-1;
        if(s == "") {
            return -1;
        }
        for(int i=0 ; i<s.length(); i++) {
            word=s[i];
            int val = s.find(word);
//            cout << "val = " << val;
            if(s.find(word, val+1) == string::npos) {
//            	cout << "inside if";
            	pos = i;
                break;
                
            }         }
        return pos;
}

int main() {
	string s = "cdabcaabb";
	int index = uniqueString(s);
	cout << index;
	return 0;
}
