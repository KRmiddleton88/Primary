#include <iostream>
#include <cmath>

int main()
{
    double base, exponent, result;                      //Declares doubles without initializing
    base = 0.0;                                          //initiales var base
    exponent = 0.0;                                      //initializes var exponent
    result = pow(base, exponent);                        //declares result does math stuff
    
    std::cout << "Enter a Base: ";                              //Output call for base
    std::cin >> base;                                           //Has User input base
    std::cout << "\n" << "Enter the exponent:";                 //Ouputs call for exponent
    std::cin >> exponent;                                       //Base input by user
    
    std::cout << "\n" << result;                                //Outputs Answer from console
    return 0;
}

