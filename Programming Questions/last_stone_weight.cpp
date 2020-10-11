#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

 int lastStoneWeight(vector<int>& stones) {
        int diff;
        int len = stones.size();
        while((len)>1) {
            sort(stones.begin(), stones.end());
            diff = abs(stones[len-2] - stones[len-1]);
            cout << stones[len-2] << "   " << stones[len-1] << endl;
            stones.pop_back();
            stones.pop_back();
            if(diff != 0 && stones.size()!= 0 ) {
            	stones.push_back(diff);	
			}else {
				stones.push_back(diff);
			} 
			
			len = stones.size();
            
			       
        }
        
        cout << "vector size = " << stones.size();
        return stones[0];
        
    };

int main() {
	vector<int> v;
	v={2, 2};
	int val = lastStoneWeight(v);
	cout << "val is = " << val;
	return 0;
}
