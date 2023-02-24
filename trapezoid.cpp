#include <iostream>
#include "trapezoid.h"

int trapezoid(int row, int column, int stars) { 

  std::cout << "Width: 12" << std::endl; 
  std::cout << "Height: 5\n" << std::endl; 

  for (int i = 0; i < row; i++) {
    stars = stars - 2; 
  }
  if (stars <= 0 ) {
    std::cout << "Impossible Shape!\n"; 
  } else 
    for (int i = 0; i < row; i++) {
        for (int b = 0 ; b < column ; b++) {
          if(i >= (b + 1) || b >= (column - i)) {
            std::cout << " "; 
          } else
          std::cout << "*"; 
        }
    std::cout << std::endl; 
    }
  
return 0; 
}
