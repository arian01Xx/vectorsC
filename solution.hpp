#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

class Solution{
public:
	int sumCounts(vector<int> nums){
		int n=nums.size();
		int ans=0;
		for(int i=0; i<n; i++){
			int val=0;
			map<int,int> fr;
			for(int j=i; j<n; j++){
				if(fr[nums[j]]==0){
					val++;
				}
				fr[nums[j]]++;
				ans=ans+val*val;
			}
		}
		return ans;
	}
};

#endif // SOLUTION_HPP