#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"


int main() { 

std::cout << box(11,6) << "\n"; 
std::cout << checkerboard(11,6) << "\n"; 
std::cout << cross(8,8,8) << "\n"; 
std::cout << lower(6) << "\n"; 
std::cout << upper(6) << "\n"; 
std::cout << trapezoid(5,12,12) << "\n"; 
std::cout << checkerboard3x3(11,16,0,0) << "\n"; 
return 0; 
}
