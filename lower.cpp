#include <iostream>
#include "lower.h"

int lower(int row) {

  std::cout << "Side length :6" << std::endl;

  for (int i = 0; i <= row; i++) {
    for (int a = 1; a <= i; a++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
