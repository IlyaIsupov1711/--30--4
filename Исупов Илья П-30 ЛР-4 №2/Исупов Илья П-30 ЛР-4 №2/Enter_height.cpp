#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int enter_hei()
{
	int hei = 0;
	std::cout << "������� ��� ����=";
	std::cin >> hei;
	if (cin.fail())
	{
		std::cout << "�� ����� �� ��� ������ ������!" << std::endl;
	}
	return hei;
}