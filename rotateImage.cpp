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
	for(auto& it : b){
		for(auto& it2: it){std::cout << it2 << ",";  }
		std::cout << "\n" ;
	}


}
int main(){
	std::vector<std::vector<int>> a = { {1,2,3},{4,5,6},{7,8,9}};
	for(auto& it : a){
		for(auto& it2: it){std::cout << it2 << ",";  }
		std::cout << "\n" ;
	}
	rotateImage(a);
	return 0;	
}
