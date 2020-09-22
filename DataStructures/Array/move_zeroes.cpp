#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) {
        int temp=0;
        for(int i=0, j=i+1; i<nums.size(), j<nums.size(); i++, j++) {
            if(nums[i]==0){
                temp= nums[i];
                nums[i]=nums[j];
                nums[j]=nums[i];
            }
        }
        return nums;
    }
    
int main() {
	vector<int> v={0,1,0,3,12};
	vector<int>vec= moveZeroes(&v);
	for(int i=0; i<vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
	
}
