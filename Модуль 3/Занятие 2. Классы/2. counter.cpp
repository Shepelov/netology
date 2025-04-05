#include <iostream>
#include <clocale>

class Counter{
private:
	int value;
public:
	Counter(){
		value = 1;
	}

	Counter(int init){
		value = init;
	}

	int command(char c){
		switch (c){
		case '+':
			value++;
			break;
		case '-':
			value--;
			break;
		}
		return value;
	}
};

int main(int argc, char argv[])
{
	setlocale(LC_ALL, "rus");

	char start_initial;
	int init;
	Counter* cnt;
	char command;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� \"Y\" ��� \"N\": ";
	std::cin >> start_initial;
	if (start_initial == 'Y'){
		std::cout << "������� ��������� �������� �������� (����� �����): ";
		std::cin >> init;
		cnt = new Counter(init);
	}
	else{
		cnt = new Counter();
	}

	do{
		std::cout << "������� ������� (\"+\", \"-\", \"=\" ��� \"x\"): ";
		std::cin >> command;
		switch (command){
		case 'x':
			break;
		case '+':
		case'-':
		case '=':
			std::cout << "�������� ��������: " << cnt->command(command) << std::endl << std::endl;
			break;
		default:
			std::cout << "�� ����� ������������ �������!" << std::endl << std::endl;
			break;
		}
	}
	while (command != 'x');
	std::cout << "������ ��������� ���������! �� ��������!" << std::endl;

	return 0;
}

