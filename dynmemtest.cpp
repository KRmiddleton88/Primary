#include <iostream>

int main()
{

	int x{2};
	int& refx{x};

	std::cout << x << " " << &x << " " << refx << " " << &refx << (*(&x)) << " \n\n\t";

return 0;

}
