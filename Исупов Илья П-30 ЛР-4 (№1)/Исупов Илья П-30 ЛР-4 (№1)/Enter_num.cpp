#include <iostream>

int enter()
{
	std::string str1;
	std::cout << "������� �����=";
	int x = std::cin.get();
	if (std::cin.get() == (int) '/n')
	{
		std::cout << "��������� �����=" << x << std::endl;
	}
	else
	{
		std::cout << "������ ����� ������" << std::endl;
	}
	return x;
}