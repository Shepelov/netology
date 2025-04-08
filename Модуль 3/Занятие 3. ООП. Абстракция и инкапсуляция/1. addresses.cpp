#include <iostream>
#include <clocale>
#include <fstream>
#include <string>

class Address{
private:
	std::string city;
	std::string street;
	int houseNumber;
	int flatNumber;
public:
	void setAddress (std::string city, std::string street, int houseNumber, int flatNumber){
		this->city = city;
		this->street = street;
		this->houseNumber = houseNumber;
		this->flatNumber = flatNumber;
	}
	std::string getAddress(){
		return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(flatNumber);
	}
};

int main(int argc, char argv[])
{
	setlocale(LC_ALL, "rus");

	std::string amount;
	Address* addresses;

	std::ifstream input ("input.txt"); 
	if (!input.is_open()){
		std::cout << "Ошибка открытия файла с входными данными!" << std::endl;
	}
	else{
		getline(input, amount);

		addresses = new Address [std::stoi(amount)];

		for (int i = 0; i < std::stoi(amount); ++i){
			std::string city;
			std::string street;
			std::string houseNumber;
			std::string flatNumber;
			getline(input, city);
			getline(input, street);
			getline(input, houseNumber);
			getline(input, flatNumber);
			addresses[i].setAddress(city, street, std::stoi(houseNumber), std::stoi(flatNumber));
		}
		input.close();

		std::ofstream output ("output.txt");
		if (!output.is_open()){
			std::cout << "Ошибка создания файла для выходных данных!" << std::endl;
		}
		else{
			output << std::stoi(amount) << "\n";
			for (int i = std::stoi(amount)-1; i > -1; --i){
				output << addresses[i].getAddress() << "\n";	
			}
			output.close();
		}

		delete[] addresses;
		std::cout << "Программа окончила свою работу!" << std::endl;
	}

	

	return 0;
}