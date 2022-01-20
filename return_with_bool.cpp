#include <iostream>

double returntest(double x, double y)
{


	return (x > y) ? x : y;
}

int main()
{
	double x = 2.5;
	double y = 3.5;

	//returntest(x, y);
	std::cout << " " << returntest(x, y) << "\n\n";

return 0; 
}
