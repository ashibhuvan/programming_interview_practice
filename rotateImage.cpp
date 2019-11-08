#include <vector>
#include <iostream>

/*
You are given an n x n 2D matrix that represents an image. Rotate the image by 90 degrees (clockwise).

Example

For

a = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
the output should be

rotateImage(a) =
    [[7, 4, 1],
     [8, 5, 2],
     [9, 6, 3]]
*/
void rotateImage(std::vector<std::vector<int>> a){

	std::vector<std::vector<int>> b(a);
	b[0][0] = 10;	
	
	std::cout << "index is:";
	for(auto& it : a){
	//	std::cout << &it - &a[0];
		for(auto& it2 : it){
			std::cout << "inner:" << &it2-&it[0]; 	
		}
	}
	for(auto& it : b){
		for(auto& it2: it){
		//	int index = &it2 - it.begin();
		//	std::cout << index << ",";  
		}
		std::cout << "\n" ;
	}
  std::vector<std::vector<int>> result(a);
    //you need a size for index reference
    int size = a.size();
    
    for(auto& it : a){
        //iterate through each row
        for(auto& it2 : it){
            
            //take each element and put it in the size-1 location
            int index = &it2 - &it[0];
            //gunna do the size element and then reduce it
            //size is 3 so gotta take the size -1 
            //for each element in the first row, set the size element of the index-1 row
            result[index][size-1] = it2;
        }
        --size;
        
    }

}
int main(){
	std::vector<std::vector<int>> a = { {1,2,3},{4,5,6},{7,8,9}};
	/*
	for(auto& it : a){
		for(auto& it2: it){std::cout << it2 << ",";  }
		std::cout << "\n" ;
	}
	*/
	rotateImage(a);
	return 0;	
}
