#include <iostream>


int getvalue()
{
	std::cout << "Enter an integer: ";
	int x = 0;
	std::cin >> x;
	

	return x;

}

int getsecondvalue()
{
	int x = 0;
	std::cout << "\nEnter a larger integer: ";
	std::cin >> x;

	return x;
}

int main()
{

	int one = getvalue();
	int second = getsecondvalue();

	if (!(one < second))
		{
			int  swap = one;
			 one = second;
			 second = swap;

			std::cout << "\nSwapping the values\n";
			
			std::cout << "The smaller value is " << one << "\n";
			std::cout << "The larger value is " << second << " \n";
		}

return 0;
}
