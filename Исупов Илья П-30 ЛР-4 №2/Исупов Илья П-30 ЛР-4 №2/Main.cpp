#include <iostream>
int enter_wei();
int enter_hei();
int calculation(int wei, int hei);

int main()
{
	setlocale(LC_ALL, "RUS");
	int weight;
	weight = enter_wei();
	int height;
	height = enter_hei();
	int ideal_wei;
	ideal_wei=calculation(weight, height);
	std::cout << "Ваш идеальный вес=" << ideal_wei << std::endl;
	return 0;
}