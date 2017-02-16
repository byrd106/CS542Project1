// my first program in C++
#include <iostream>
#include <vector>

std::vector<int> createVector() {
	size_t size = 3;
	
	std::vector<int> array(size);    // make room for 10 integers,

	// TODO: Create spare matrix 
	for(int i=0; i<size; ++i){
	    array[i] = 1;
	}

	return array; 
}

std::vector< std::vector<int> > createMatrix() {
	size_t size = 2;	
	
	std::vector< std::vector<int> > array(size);    // make room for 10 integers,
	                                 // and initialize them to 0
	// do something with them:
	// with a one in ten probabiliy, add a sparse matrix multiplication 
	for(int i=0; i<size; ++i){
	    array[i] = createVector(); 
	}

	return array; 
}

void printVector(std::vector<int> data) {
	    
	// do something with them:
	for(int i=0; i<data.size(); ++i){
	    std::cout << data[i] << std::endl; 
	}
	
}

int main()
{
	

  std::vector<int> sparseVector = {2,8,2};

  std::vector< std::vector<int> > matrix = createMatrix();

  std::vector< std::vector<int> > resultMatrix(matrix.size()); 

  for (int row = 0; row < matrix.size(); row++) {  
  	 
  	resultMatrix[row] = std::vector<int>(matrix[row].size());
  	
  	for (int smaller = 0; smaller < matrix[row].size(); smaller++) {    		
  		resultMatrix[row][smaller] = sparseVector[smaller] * matrix[row][smaller];  		
  	}
	
  }

  for (int row = 0; row < matrix.size(); row++) {
  	printVector(resultMatrix[row]); 
  }

}




