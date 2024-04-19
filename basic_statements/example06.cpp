/**
 Write a program that draws in the terminal a big X out of the character 'X',  
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   X X          X  X           X   X
    X            XX             X X
   X X           XX              X
                X  X            X X
                               X   X      */
#include <iostream>  // to allow use of std::cout and std::endl
int main( ) {
  int size = 0;

  std::cout << "how big should the x be? between 3 & 20: " << std::endl;
  std::cin >> size;
  for(int vertical = 0; vertical < size; vertical++){
    for(int horizontal = 0; horizontal < size; horizontal++){
      if(horizontal == vertical || horizontal == (size-1)-vertical) std::cout << 'X';
      else {
        std::cout << ' ';
      }
    }
    std::cout << std::endl;
  }



  return 0;
}
