#include <iostream>
// multilevel inheratence

class MyClass {
  public:
    void myFunction() {
      std::cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
    public:
        void MyChild_func() {
        std::cout << "ok\n" ;
        }
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyClass obj3;
  MyChild obj2;
  MyGrandChild myObj;
  obj3.myFunction();
  std::cout << "\n";
  obj2.myFunction();
  std::cout << "\n";
//   myObj.myFunction();
//   std::cout << "\n";

  return 0;
}
