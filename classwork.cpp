#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{

std::srand(std::time(0)); //seeding our random number generator 

int user_input = 0;
int num1;
int num2;
double numerator; 
double denominator; 
while (user_input !=99) 

std::cout << "Welcome to C++ Calculator! Choose an option below!\n"
    << "0. Roll a dice\n"
    << "1. Add\n"
    << "2. Subtract\n"
    << "3. Multiply\n"
    << "4. Divide\n"
    << "5. Square root \n"
    << "99. Quit\n"
  return 0;
}
