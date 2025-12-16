#include <iostream>

class Vehicle {
  public:
    std::string brand = "Ford";
    void honk() {
      std::cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    std::string model = "Mustang";
};

int main()
{
    Vehicle obj1;
    Car obj2;

    std::cout << obj1.brand << "\n";
    std::cout << obj2.brand << "\n";
    obj2.honk();
}
