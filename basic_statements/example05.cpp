/**
 Write a program that prints in the terminal all prime numbers from 3 till 99.   
 Remember: A number is a prime when any division by a smaller number results in
 a remainder that is never zero.
*/
#include <iostream>  // to allow use of std::cout and std::endl
int main( ) {
  int number = 3;
  for(int i = 3; i < 99; i++){
  
    // std::cout << "number will be tested: " << i << std::endl;
    for(int divider = 2; divider <= i/2; divider++){
      // std::cout << "divider: " << divider<< std::endl;
      if((i % divider) == 0) {
        i++;
        break;
      }
      else{
        if(divider == i/2){
          number = i;
        }
      }
    }
    if(number == i){
      std::cout<<"number : " << number <<std::endl;
    }
  }


  return 0;
}
