#include <iostream>

bool orderme(int x, int y, int z)
{
	if (return ((x > y) && (y > z)))
		std::cout << "\nAll in order";
	
}

int getnum()
{
	std::cout << "Enter a number\n";
	int x = 0;
	std::cin >> x;
	
	return x;
}
int main()
{
	int x = getnum();
	int y = getnum();
	int z = getnum();

	orderme(x, y, z);

return 0;
}
