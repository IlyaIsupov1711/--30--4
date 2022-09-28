#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int enter_hei()
{
	int hei = 0;
	std::cout << "Введите ваш рост=";
	std::cin >> hei;
	if (cin.fail())
	{
		std::cout << "Вы ввели не тот формат данных!" << std::endl;
	}
	return hei;
}