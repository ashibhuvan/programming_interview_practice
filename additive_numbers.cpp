#include <vector>
#include <string>
#include <iostream>
#include <sstream>



    bool isAdditiveNumber(std::string num) {
        
        if(num.size() >= 3){
            
                       
        for (std::string::iterator it = num.begin() + 2 ; it != num.end(); it++){
                int index = it - num.begin();
                char answer = num[index-1];
                char answer1 = num[index-2];
                std::stringstream s;
                s << answer1;
                int x;
                s >> x;

                std::cout << "answer 1 is: " << answer1 << std::endl;
                std::cout << "answer 1 as int is: " << x << std::endl;
                
                    /*
                if(  (int)*it == (int)num[index-1] + (int)num[index-2] ){
                    
                }
                else return false;
            */
        }
        return true;
            
        }else return false;
    }


    int main(){

    std::string test_case = "112358";
    std::cout << test_case << std::endl;
    return isAdditiveNumber(test_case);


    }