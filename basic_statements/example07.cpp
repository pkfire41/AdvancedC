/**
 Write a program that draws in the terminal a bigger X out of the character 'X',  
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   XX X         XX  X          XX   X
    XX           XXX            XX X
   X XX          XXX             XX
                X  XX           X XX
                               X   XX      */
#include <iostream>  // to allow use of std::cout and std::endl
int main( ) {
  int size = 0;

  std::cout << "how big should the x be? between 3 & 20: " << std::endl;
  std::cin >> size;
  for(int vertical = 0; vertical < size; vertical++){
    for(int horizontal = 0; horizontal < size; horizontal++){
      if(horizontal == vertical){
        std::cout<<"XX";
      }else if(horizontal == size-vertical-1) std::cout << 'X';
      else {
        std::cout << ' ';
      }
    }
    std::cout << std::endl;
  }


  return 0;
}
