#include <vector>
#include <string>
#include <iostream>
#include <math.h>

/*

You are given a two-digit integer n. Return the sum of its digits.

Example

For n = 29, the output should be
addTwoDigits(n) = 11

*/
int largestNumber(int n){
	
	int answer = (pow(10,n)) - 1;
	std::cout << answer << std::endl;
	return answer;

}

int main(){
	int num = 3;
	largestNumber(num);
	return 0;
}
