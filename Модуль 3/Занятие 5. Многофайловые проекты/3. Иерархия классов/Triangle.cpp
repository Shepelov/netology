#include "Triangle.h"

#include <iostream>

void Triangle::print_info() {
	std::cout << type << std::endl;
	std::cout << "�������: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}