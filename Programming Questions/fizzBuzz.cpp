#include<iostream>
#include<vector>
using namespace std; 
vector<string> fizzBuzz(int n) {
//        cout << 2%3 << endl;
        vector<string> s;
        
        for(int i=1; i<=n; i++) {
//        	cout << i << " " << i%3 << " " << i%5 << ": " << endl;
        	string str="";
            if(i%3 == 0) {
            	str = "Fizz";
			}
			if(i%5 ==0) {
				str += "Buzz";
			}
			if(str.empty()){
				str = to_string(i);
			}
			s.push_back(str);
        }
        return s;
    }
    
int main() {
	int n=15;
	vector<string> s = fizzBuzz(n);
	for(int i=0; i<s.size(); i++) {
		cout << s[i] << endl;
	}
	return 0;
}
