#include <iostream>

int calculation(int wei,int hei)
{
	int ideal_weight = 0;
	ideal_weight = (hei-100) - (hei-150) / 2;
	if (ideal_weight < wei)
	{
		std::cout << "Рекомендуем вам похудеть!" << std::endl;
	}
	else if (ideal_weight > wei)
	{
		std::cout << "Рекомендуем вам поправиться!" << std::endl;
	}
	else if (ideal_weight = wei)
	{
		std::cout << "У вас идеальный вес!" << std::endl;
	}
	return ideal_weight;
}