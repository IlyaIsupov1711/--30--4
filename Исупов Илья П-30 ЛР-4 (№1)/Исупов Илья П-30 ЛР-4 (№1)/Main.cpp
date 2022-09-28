
#include <iostream>

int enter();
int check(int num);
int out(int fir,int sec,int third);

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	num = enter();
	int fir_num;
	fir_num=check(num);
	num = 0;
	num = enter();
	int sec_num;
	sec_num = check(num);
	num = 0;
	num = enter();
	int third_num;
	third_num = check(num);
	num = 0;
	out(fir_num, sec_num, third_num);
	return 0;
}
