#include "Quadangle.h"

#include <iostream>

void Quadangle::print_info() {
	std::cout << type << std::endl;
	std::cout << "�������: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
	std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
	std::cout << std::endl;
}