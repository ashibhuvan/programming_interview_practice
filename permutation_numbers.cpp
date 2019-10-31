#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
private:
    std::vector<std::vector<int>> results;
    void backtrack(std::vector<int>& nums, std::vector<int>& current){
        
        if(nums.size() == 0){
            results.push_back(current);
            for(auto it : current){
			std::cout << it << " , ";

		      }
            std::cout << "\n"; 
        }
        for(auto& it : nums){
            int index = &it - &nums[0]; 
            //add to current the element
            int temp = nums[index];
            current.push_back(temp);
            

            //remove from nums, back trace whats left, and then unmodify
            nums.erase(nums.begin() + index);

           
            backtrack(nums,current);
            current.pop_back();
            
            nums.insert(nums.begin() + index,temp);
        }
        
        
    }
public:
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int pos = 0;
        std::vector<int> current;
        backtrack(nums , current);
        return results;
    }
};



int main(){


	std::vector<int> test_case  = {1,2,3};
	Solution bob;
	bob.permute(test_case);
	

}

