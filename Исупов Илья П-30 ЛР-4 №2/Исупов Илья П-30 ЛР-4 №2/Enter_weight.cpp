#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int enter_wei()
{
	int weight = 0;
	std::cout << "������� ��� ���=";
	std::cin >> weight;
	if (cin.fail())
	{
		std::cout << "�� ����� �� ��� ������ ������!" << std::endl;
	}
	return weight;
}