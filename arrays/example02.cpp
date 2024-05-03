/**
  Write a program that lets a user fill an array of 10 integers, using a loop, 
  and then calculate and output the average of all given numbers to the terminal.
  Assume that the user enters a valid number each time. 
  */
#include <iostream>  // to allow use of std::cout, std::cin, and std::endl
int main() {
  int myArray[10];

  std::cout << "please enter 10 numbers. i will ask for every value separately" << std::endl;

  for(int i = 0; i < 10; i++){
    std::cout << "Please enter your number for value " << i << ":" << std::endl;
    std::cin >> myArray[i];
  }

  for(int i = 0; i < 10; i++){
    std::cout << "Array value on " << i << "th place is: " << myArray[i] << std::endl;
  }
  



  return 0;
}
