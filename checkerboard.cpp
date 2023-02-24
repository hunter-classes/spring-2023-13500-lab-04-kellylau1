#include <iostream>
#include <cmath>
#include "checkerboard.h"

int checkerboard(double width, int height) {
  double rounding = round(width / 2);
  double remain_width = width - round(width / 2);

  std::cout << "Width: 11\n" << std::endl;
  std::cout << "Height: 6\n" << std::endl;
  std::cout << "Shape: " << std::endl;

  for (int i = 0; i < height / 2; i++) {
    if (rounding > remain_width) {
      for (int i = 0; i < rounding; i++) {
        std::cout << "* ";
      }
      std::cout << std::endl;
    }
    if (remain_width < rounding) {
      for (int i = 0; i < remain_width; i++) {
        std::cout << " *";
      }
      std::cout << std::endl;
    }
  }

  std::cout << std::endl;
  return 0;
}
