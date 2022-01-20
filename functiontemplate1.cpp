#include <iostream>


template <typename T>

T maxsize(T x, T y)
{

	return (x > y) ? x : y;
}

int main()
{

	int x = 5;
	int y = 25;

	std::cout << " " <<  maxsize(x, y) << " \n\n\t";

return 0;

}
