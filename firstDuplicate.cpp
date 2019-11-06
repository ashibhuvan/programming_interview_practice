#include <vector>
#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>
/*

Given an array a that contains only numbers in the range from 1 to a.length, find the first duplicate number for which the second occurrence has the minimal index. In other words, if there are more than 1 duplicated numbers, return the number for which the second occurrence has a smaller index than the second occurrence of the other number does. If there are no such elements, return -1.
*/
int firstDuplicate (std::vector<int> a){
	std::vector<int> temp;
	for(auto& it : a){
		if(std::find(temp.begin(), temp.end(), it) == temp.end())  //this means its not there 
			{
			//its not there,
			std::cout << it << "\n";
			temp.push_back(it);
			}
		else{
			
			std::cout <<"answe: " <<  it << std::endl;
			return it;

			}
	}
}	

int main(){
	std::vector<int> a = {2,1,3,5,3,2};
	firstDuplicate(a);
	return 0;
}
