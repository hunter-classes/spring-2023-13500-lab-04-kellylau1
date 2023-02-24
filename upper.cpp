#include <iostream>
#include "upper.h"

int upper(int row) {
  
  std::cout << "Side length :6" << std::endl;

  for (int i = row; i >= 1; i--) {
    for(int b = row-i; b > 0; b--){
      std::cout << " "; 
    }
    for (int a = i; a > 0; a--) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
