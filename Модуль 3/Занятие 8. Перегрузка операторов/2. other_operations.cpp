#include <iostream>
#include <clocale>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator + (Fraction right) {
		int numerator_result = (numerator_ * right.denominator_) + (right.numerator_ + denominator_);
		int denominator_result = denominator_ * right.denominator_;

		return Fraction(numerator_result, denominator_result);
	}

	Fraction operator - (Fraction right) {
		int numerator_result = (numerator_ * right.denominator_) - (right.numerator_ + denominator_);
		int denominator_result = denominator_ * right.denominator_;

		return Fraction(numerator_result, denominator_result);
	}

	Fraction operator * (Fraction right) {
		int numerator_result = numerator_ * right.numerator_;
		int denominator_result = denominator_ * right.denominator_;

		return Fraction(numerator_result, denominator_result);
	}

	Fraction operator / (Fraction right) {
		int numerator_result = numerator_ * right.denominator_;
		int denominator_result = denominator_ * right.numerator_;

		return Fraction(numerator_result, denominator_result);
	}

	Fraction& operator ++ () {
		this->numerator_ = numerator_ + denominator_;
		return *this;
	}

	Fraction& operator -- () {
		this->numerator_ = numerator_ - denominator_;
		return *this;
	}

	Fraction& operator ++ (int) {
		this->numerator_ = numerator_ + denominator_;
		return *this;
	}

	Fraction& operator -- (int) {
		this->numerator_ = numerator_ - denominator_;
		return *this;
	}

	std::string print() {
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");

	int numerator1;
	int numerator2;
	int denominator1;
	int denominator2;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator2;

	Fraction frac1(numerator1, denominator1);
	Fraction frac2(numerator2, denominator2);
	Fraction result(0, 0);

	std::cout << std::endl;
	result = frac1 + frac2;
	std::cout << frac1.print() << " + " << frac2.print() << " = " << result.print() << std::endl;
	result = frac1 - frac2;
	std::cout << frac1.print() << " - " << frac2.print() << " = " << result.print() << std::endl;
	result = frac1 * frac2;
	std::cout << frac1.print() << " * " << frac2.print() << " = " << result.print() << std::endl;
	result = frac1 / frac2;
	std::cout << frac1.print() << " / " << frac2.print() << " = " << result.print() << std::endl;
	result = ++frac1 * frac2;
	std::cout << "++" << frac1.print() << " * " << frac2.print() << " = " << result.print() << std::endl;
	std::cout << "Значение дроби 1: " << frac1.print() << std::endl;
	result = frac1-- * frac2;
	std::cout << frac1.print() << "-- * " << frac2.print() << " = " << result.print() << std::endl;
	std::cout << "Значение дроби 1: " << frac1.print() << std::endl;

	return 0;
}