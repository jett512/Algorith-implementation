#ifndef SQUARE_ROOT_H
#define SQUARE_ROOT_H

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

std::string ConvertFloatToStr(float n, int precision);

std::string ApproxSqrt(int n, int iterations);

#endif