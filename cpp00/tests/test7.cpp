#include <iostream>

// constructor

class car{
    private:
        int i;
        std::string str;
    public:
        car(int j, std::string s)
        {
            i = j;
            str = s;
        }
        void print()
        {
            std::cout << "(i) value is " << i << "\n";
            std::cout << "(str) value is " << str << "\n";
        }
};

int main()
{
    car obj(10, "Abdo");
    obj.print();
}
