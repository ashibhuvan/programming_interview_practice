//You have a set of tiles, where each tile has one letter tiles[i] printed on it.  Return the number of possible non-empty sequences of letters you can make.
//asishm.school@gmail.com
/*
Input: "AAB"
Output: 8
Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

*/

#include <iostream>
#include <string>
#include <vector>

int answer = 0;
void backtrack(std::string& intial, std::string& current){
	for(auto& it : intial){
		++answer;
		int index = &it - &intial[0];
		char c = intial[index];
		//have the character, add it to current
		
		current += c;
		//print out current
		std::cout << current << std::endl;
		intial.erase(index,1);
		backtrack(intial, current);
		//undo what we did to the parameteres
		current.erase(current.size()-1,1);
		intial.insert(index,1,c);
	}

}

int main(){
	
	std::string intial = "AAB";
	std::string empty = "";
	backtrack(intial,empty);
	std::cout << "answer is " << answer <<  std::endl;
	return 0;
}
