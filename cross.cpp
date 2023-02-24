#include <iostream>
#include "cross.h"

int cross(int rows, int columns, int num_of_columns) {
  std::cout << "Size = 8\n" << std::endl;

  for (rows = 0; rows < num_of_columns; rows++) {
    for (columns = 0;  columns < num_of_columns ; columns++) {
      if (rows == columns || (rows + columns) == (num_of_columns - 1)) {
        std::cout << "*";
      } else
        std::cout << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
