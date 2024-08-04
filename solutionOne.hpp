#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

class SolutionOne{
public:
	int duplicateNumbersXOR(vector<int> nums){
		map<int,int> mp;
		for(auto it: nums){
			mp[it]++;
		}
		int res=0;
		for(auto it: mp){
			if(it.second != 1){
				res^=it.first;
			}
		}
		return res;
	}
};

#endif // SOLUTION_ONE_HPP