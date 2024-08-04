#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

class SolutionTwo{
public:
	int maximumNumberOfStringPairs(vector<string> words){
		int cnt=0;
		for(int i=0; i<words.size(); i++){
			for(int j=i+1; j<words.size(); j++){
				string ans=words[i];
				reverse(ans.begin(), ans.end());
				if(words[i]==ans){
					cnt++;
				}
			}
		}
		return cnt;
	}
};

#endif // SOLUTION_TWO_HPP