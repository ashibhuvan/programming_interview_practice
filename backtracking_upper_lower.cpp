// Backtracking easy problem for strings
//take in a string like "abAChT" , print out all combinations transforming 
//upper case to lower case and vice versa

//this solution beats 100 percent on leetcode for memory but 55 percent
// for run time, need to optimize.
#include <vector>
#include <iostream>
#include <string>

void backtrack_helper(std::vector<std::string>& result , std::string& S, int pos){
	result.push_back(S);
	while(pos < S.size()){
	if(!isdigit(S[pos])){
		S[pos] = (isupper(S[pos]) ? tolower(S[pos]) : toupper(S[pos]));
		//we edited it, pass along edit
		backtrack_helper(result, S, pos+1);		
		S[pos] = (isupper(S[pos]) ? tolower(S[pos]) : toupper(S[pos]));
	}
	++pos;
	}
}

std::vector<std::string> backtrack(std::string S){

	int pos = 0;
	std::vector<std::string> result; 
	backtrack_helper(result , S, pos);
	return result;
}

int main(){

	std::string initial  = "uGIoJBJhouHIO";
	std::vector<std::string> answer = backtrack(initial);
	for(auto& it : answer){
		std::cout << it << std::endl;
	
	}

}
