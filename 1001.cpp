#include <iostream>
int main()
{
	int step = 0;
	int n;
	std::cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = (n * 3+1) / 2;
		step++;
	}
	std::cout << step;
}