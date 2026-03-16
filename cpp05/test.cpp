#include <iostream>
#include <exception>

int main()
{
    int a = 5;
    int b = 0;

    try
    {
        if(b == 0)
            throw "exption me hapened";
        std::cout << a / b << std::endl;
    }
    catch (int e)
    {
        std::cerr << "Error: Division by zero is not allowed. Error code: " << e << std::endl;
    }
    catch (float e)
    {
        std::cerr << "Error: Division by zero is not allowed. Error code: " << e << std::endl;
    }
    catch (const char *s)
    {
        std::cerr << "Error: " << s << std::endl;
    }
    catch(...)
    {
        std::cerr << "An unexpected error occurred." << std::endl;
    }
    std::cout << "compleat." << std::endl;
}



