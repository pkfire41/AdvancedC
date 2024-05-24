/**
  Create a class with just a static member, and illustrate that it exists, even 
  without any objects.
*/

#include <iostream>
#include "testClass.h"

// write the class here
// class …


int main() {
  // do not create an object here, but assign a value to static member here 
  std::cout << " The value of the static member is "; 
  // print its value here
  std::cout << MyClass::value << std::endl;
  return 0;
}
