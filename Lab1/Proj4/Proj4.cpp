#include <iostream>

int main()
{
	int x, y, temp;
	x = 5;
	y = 7;

	temp = x;
	x = y;
	y = temp;

	x = 5;
	y = 7;
	x = x + y;
	y = y - x;
	y = -y;
	x = x - y;
	return 0;

}