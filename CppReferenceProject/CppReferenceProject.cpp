#include <iostream>

void func(int& b)
{
    b = 100;
}

int main()
{
    int a{ 10 };

    std::cout << a << " " << &a << "\n";

    /*int& b{ a };
    b = 20;*/

    func(a);

    std::cout << a << " " << &a << "\n";

    int* ptr = &a;

    std::cout << ptr << " " << &ptr << "\n";

}
