#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int i, j,count = 0;
        int val = 0;
        int len = nums.size();
        while(i<len) {
            j=i+1;
           while(nums[i]==nums[j]) {
               
               j++;
           }
            nums[i]= nums[j];
            i++;
            
        }
        return i+1;
    }
    
    int main() {
    	vector<int> nums =[1,1,2,2,2,3,4];
    	cout << removeDuplicates(nums);
    	return 0;
	}
