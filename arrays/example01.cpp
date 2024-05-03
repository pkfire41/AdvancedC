/**
  Write a program that initializes an array of 50 booleans, repeatedly having two
  elements with a true value, followed by one element with false.
  So the array starts with: true, true, false, true, true, false, true, true, … 
  Do not use any variables other than myArray and a loop iteration variable. 
*/

#include <iostream>

int main() {
  bool myArray[50]; 
  for(int i = 0; i < 50; i++){
    if(i % 3 == 2){
      myArray[i] = false;
    }
    else {
      myArray[i] = true;
    }
    std::cout << myArray[i] << "on place: " << i << std::endl;
  }


  return 0;
}
