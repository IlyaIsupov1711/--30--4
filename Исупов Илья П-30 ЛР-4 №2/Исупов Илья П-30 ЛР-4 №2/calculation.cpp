#include <iostream>

int calculation(int wei,int hei)
{
	int ideal_weight = 0;
	ideal_weight = (hei-100) - (hei-150) / 2;
	if (ideal_weight < wei)
	{
		std::cout << "����������� ��� ��������!" << std::endl;
	}
	else if (ideal_weight > wei)
	{
		std::cout << "����������� ��� �����������!" << std::endl;
	}
	else if (ideal_weight = wei)
	{
		std::cout << "� ��� ��������� ���!" << std::endl;
	}
	return ideal_weight;
}