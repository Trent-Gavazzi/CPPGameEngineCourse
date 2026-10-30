#include <iostream>
template <typename T>
class Print
{
    public:
        static void pp(const T & a)
        {
            std::cout << &a << " " << a << " " << sizeof(a) << '\n';
        }
};