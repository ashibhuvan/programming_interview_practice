#include <vector>
#include <string>
#include <iostream>

/*

You are given a two-digit integer n. Return the sum of its digits.

Example

For n = 29, the output should be
addTwoDigits(n) = 11

*/

int addTwoDigit(int n){
	std::string test = std::to_string(n);
	std::cout << test << std::endl;
	return 0;

}

int main(){
	int num = 29;
	addTwoDigit(num);

return 0;
}
