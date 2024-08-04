#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> nums={1,2,1,4,2,1,2,7,8,3,2,1,1};
	int output=solution.sumCounts(nums);
	cout<<"FIRST ANSWER= "<<output<<endl;

	SolutionOne solution1;
	vector<int> numsOne={1,2,2,1};
	int outputOne=solution1.duplicateNumbersXOR(numsOne);
	cout<<"SECOND ANSWER= "<<outputOne<<endl;

	SolutionTwo solution2;
	vector<string> words={"cd","ac","dc","ca","zz"};
	int outputTwo=solution2.maximumNumberOfStringPairs(words);
	cout<<"THIRD ANSWER= "<<outputTwo<<endl;

	return 0;
}
