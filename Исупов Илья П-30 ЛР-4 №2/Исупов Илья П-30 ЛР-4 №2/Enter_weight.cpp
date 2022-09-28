#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int enter_wei()
{
	int weight = 0;
	std::cout << "Введите ваш вес=";
	std::cin >> weight;
	if (cin.fail())
	{
		std::cout << "Вы ввели не тот формат данных!" << std::endl;
	}
	return weight;
}