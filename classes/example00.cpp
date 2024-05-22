/**
  Write a program that declares, implements, and uses a class with no attributes.
  The class should print 'hello' to the terminal when its object is created and
  'bye' when its object is removed from memory.
*/
#include <iostream>     // terminal input and output classes and objects

// write the class here

class Test {
    public:
    Test(){
      std::cout << "hello" << std::endl;
    }
    ~Test(){
      std::cout<<"bye bye" << std::endl;
    }
};

int main() {
  // create a class object here
  Test testing;
  return 0;
}
