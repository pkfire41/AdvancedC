/**
  Write a program that initializes two integers 'number1' and 'number2', 
  and tests whether number1 is a multiple of number2. Put this result in the 
  boolean variable 'result' below.
  */

 #include <iostream>

int main() {
  bool result = false; 
  
  int number1, number2 = 0;

  std::cout << "pls enter your two numbers to test if they number 2 is a multiple of number 1" << std::endl;
  std::cout << "number 1: ";
  std::cin >> number1;
  std::cout << std::endl << "number 2: ";
  std::cin >> number2;

  result = (number1 % number2) == 0;

  std::cout << "the statement is: " << (bool) result << std::endl;


  return (int) result;
}
