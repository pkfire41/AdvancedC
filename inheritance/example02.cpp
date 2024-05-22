#include <iostream> 

class Rectangle {  // class Rectangle has width and height as attributes and area() as a method  
 public:
  Rectangle() {}  // default constructor, allows to define width and height later
  Rectangle(int x, int y): width(x), height(y) {}  // constructor that sets attributes
  int area() { return width*height; };
  friend Rectangle enlarge(Rectangle source);
  // declare the friend method "enlarge()" here, with a rectangle as parameter, returning a rectangle
 private:
  int width, height;  // width and height are private, so not accessible from outside the class 
};

Rectangle enlarge(Rectangle source){
  return Rectangle(2*source.width, 2*source.height);
}

/* define the friend method here, so that it creates and returns a copy of the rectangle that 
   has twice the width and height. The friend method has access to the private attributes. */

int main() {
  Rectangle rectangle1, rectangle2(3,4);  // rectangle1 will obtain twice the width and height
  rectangle1 = enlarge(rectangle2);        // of rectangle2 through the enlarge method
  std::cout << rectangle1.area() << "\n";  // this should return "48" (6 times 8)
  return 0;  
}
