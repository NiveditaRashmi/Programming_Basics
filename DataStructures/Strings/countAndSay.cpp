#include<iostream>
using namespace std;

string countAndSay(int n) {
        int count =1;
        int i=0, j=0;
        string s1="";
        string s2 = "";
        if(n==1) return s1="1";
        if(n==2) return s1="11";
        
        s1="11";
        int len;
        while(n>2) {
        	s2="";
        	cout <<" inside first while"<< n<< "  " << "  " << i << "  s1=" << s1<<endl;
        	len=s1.length();
//        	cout << "s1   " << s1 << " "<< len  <<  endl;
        	while(i<len) {
//        		cout << "inside second while" << " i=" << i <<" j=" <<j<<endl;
        		j=i+1;
        		while(j<len && s1[i]==s1[j]) {
//        			cout<< "inside third while" << endl;
        			i = j; 
        			count++;
        			j++;
					       			
				}
				s2+=to_string(count);
//				cout << "hello   " << s2<< " s1[i]=" << s1[i]  << "  i=" << i<< endl;
				s2+=s1[i];
//				cout << "s2   " << s2 << endl;
				i++;
				count=1;
//				cout << "i =" << i<<endl;
				
				
			}
			s1=s2;
			i=0;
			j=0;
			
			
			n--;
			
		}
		return s1;
    }
    
int main() {
	int n=30;
//	cin >> n;
	cout << "return answer is  " << countAndSay(n)<< endl;
	return 0;
}
