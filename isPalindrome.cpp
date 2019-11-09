#include <string>
#include <stdexcept>
#include <iostream>

bool isPalindrome(const std::string& word)
{
    std::string str;	
	for(auto& it : word) str+=std::tolower(it);
    std::string bob = "";
    for(std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit){ //   bob = bob + *rt;

		bob+=std::tolower(*rit);
	
	}
std::cout << str << std::endl;
std::cout << bob << std::endl;
    if(bob == str)return true;
	else return false;
   // if(bob == word)return true;
   // else return false;
//    throw std::logic_error("Waiting to be implemented");

}

#ifndef RunTests
int main()
{
    std::cout << isPalindrome("Deleveled");
}
#endif
