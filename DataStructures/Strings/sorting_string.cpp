// C++ program to sort a string of characters 
#include<bits/stdc++.h> 
using namespace std; 
  
// function to print string in sorted order 
void sortString(string str) 
{ 
   string temp = sort(str.begin(), str.end()); 
   cout << temp << "  this is temp" << endl << str; 
} 
  
// Driver program to test above function 
int main() 
{ 
    string s = "geeksforgeeks";  
    sortString(s);  
    return 0; 
} 
