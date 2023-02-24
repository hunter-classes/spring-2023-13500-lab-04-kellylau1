#include <iostream>
#include "box.h"

int box(int width, int height) {
  
  std::cout << "Width: 11" << std::endl;
  std::cout << "Height: 6\n" << std::endl;
  std::cout << "Shape: " << std::endl;
  
  for(int i = 0; i < height; i++) {
    for(int i = 0; i < width; i++) {
      std::cout << "*"; 
    }
    std::cout << std::endl; 
  }
  
  std::cout << std::endl; 
  return 0;
}
