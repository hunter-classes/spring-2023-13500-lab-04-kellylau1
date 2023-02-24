#include <iostream>
#include "checkerboard3x3.h"

int checkerboard3x3 (int row, double column, int star, int empty) {

  std::cout << "Width: 16" << std::endl;
  std::cout << "Height: 11\n" << std::endl;
  std::cout << "Shape: " << std::endl;

    for (int i = 0; i < row; i++) {
		for (int a = 0; a < column; a++) {
			if ((a%6 < 3 && i%6 < 3) || (a%6 >= 3 && i%6 >= 
3)) {
				if (star < 3) {
					std::cout << "*";
				} star++; 
        
				if (star == 3) {
					star = 0;
				}
        
			}	else {
				if (empty < 3) {
					std::cout << " ";
				} empty++;

				if (empty == 3) {
					empty = 0;
				}
			}
		}
		std::cout << std::endl;
	}	

	return 0;
}
