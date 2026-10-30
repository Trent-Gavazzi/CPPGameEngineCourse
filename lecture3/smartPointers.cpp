#include <iostream>
#include <memory>

// "Reference Counted Pointer"
/* 
Handles RAII for us
Every time a shared_ptr is copied its counter increases by 1
Every time it destructs counter is decreased by 1, until 0 and it gets fully deallocated
*/

class MyClass
{   

    public:
        MyClass::MyClass() {}

        void func(std::shared_ptr<MyClass> p) // c++ (c = 2)
        {
            p->doSomething();
        }  // c- (c = 1)

        const void MyClass::doSomething()
        {
            std::cout << "Did Something!" << '\n';
        }
};


int main(int argc, char * argv[])
{
    auto p = std::make_shared<MyClass>(); // args inside ()
    return 0;
}