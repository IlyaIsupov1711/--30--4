#include <iostream>

int enter()
{
	std::string str1;
	std::cout << "¬ведите число=";
	int x = std::cin.get();
	if (std::cin.get() == (int) '/n')
	{
		std::cout << "¬веденное число=" << x << std::endl;
	}
	else
	{
		std::cout << "ќшибка ввода данных" << std::endl;
	}
	return x;
}