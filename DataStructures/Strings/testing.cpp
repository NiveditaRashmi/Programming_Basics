#include<iostream>
using namespace std;

int main() {
	char c = '.';
	int i = c;
	string s= "A.";
	for(int i=0; i<s.length(); i++){
            if(s[i]<'A' || s[i]>'Z' && s[i]<'a' || s[i]>'z') {
                s.erase(i,1);
                i--;
            } else {
            	char c = s[i];
            	s[i] = tolower(c);
			}
        }
	cout << i << endl;
	cout << s << endl; 
	return 0;
}
