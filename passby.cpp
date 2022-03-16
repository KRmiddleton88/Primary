#include <iostream>
#include <string>


void printcopiedvalue(std::string passed)
{

	std::cout << passed << "\n\n";

}

void printrefvalue(std::string& passed)
{

	std::cout << passed << "\n\n";

}

void printaddrvalue(std::string* passed)
{

	std::cout << *passed << "\n\n";

}

int main()
{

	std::string text{"Cheerio"};
	
	printcopiedvalue(text);
	printrefvalue(text);
	printaddrvalue(&text);
return 0;
}
