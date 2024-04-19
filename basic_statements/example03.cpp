/**
  Write a program that asks the user for a number, and then prints out this number 
  in the terminal, followed by the half of the previous number until 
  the result is smaller than ten. So for 100 it would give out: 100, 50, 25.5, 12.25
  */
#include <iostream>  // to allow use of std::cout and std::endl
int main( ) {
  double number = 0.0;

  std::cout << "give me an arbitrary number" << std::endl;
  std::cin >> number;

  std::cout << number << "is the choosen number" << std::endl;

  while((number/2) >= 10.0) {
    number /= 2;
    std::cout << number << std::endl;
  }

  std::cout << "the last number which hasn't been smaller than 10 was: " << number << std::endl;

  return 0;
}
