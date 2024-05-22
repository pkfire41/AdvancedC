/**
  Write a program that declares, implements, and uses a class with two attributes,
  a boolean called 'flag' and an integer called 'number', which can only be changed 
  or read through a constructor. The class should also have a method 'get' with no 
  parameters, which returns the integer 'number' only if 'flag' is true, and   
  otherwise 0.
*/
// write the class here

class MyNumber {
  private:
    int number = 0;
    bool flag = false;
  public:
    MyNumber(int x, bool value){
      this->number = x; 
      this->flag = value;
    }
    ~MyNumber(){}
    int getMyNumber(){
      return this->flag ? this->number : 0;
    }
};

int main() {
  int returnValue; 
  // create a class object here 
  MyNumber number = MyNumber(5, false);
  returnValue = number.getMyNumber();
  // and use its get method
  return returnValue;
}
