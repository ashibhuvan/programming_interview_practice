//this script takes in a input (single word) and outputs all the possible
//combinations (or permutations) of the word
#include <vector>
#include <string>
#include <iostream>


void permutation_helper(std::string& S,  std::string& character){
	if(S == ""){
	std::cout << character << std::endl;
	}

	for(auto& it : S){
		int index = &it - &S[0];
		char  c = it;
		character = character + c;
		S.erase(index,1);
		permutation_helper(S,character);
		S.insert(index,1,c);		
		character.erase(character.size()-1,1);
	}

} 
void permutation(std::string S){
	
	std::string character = "";
	permutation_helper(S, character);
}

int main(){

	std::string input;
	std::cin >> input;
	std::cout << "The input is : " << input << std::endl;
	
	permutation(input);
	return 0;
}
