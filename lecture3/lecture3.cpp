#include <iostream>
#include "pointerPrint.h"
#include "raiiImplementation.h"
// Memory management review
/* 
Stack must be known at compile time
Heap has memory allocated during runtime
    - "return int" returns a pointer to new point in mem
    - The pointer to the new mem lives on the stack but the data on the heap
Memory is cleared in reverse order
ALWAYS GIVE A DEFAULT VALLUE EX: int * p {};
*/
class Machine
{  
    public:
        Machine()  {}

        // Three consts all do different things kinda funny
        const void machineLearn(const int & d) const
        {
            // Random whatever code, just can't modify the reference or class or output
        }
};

int main(int argc, char * argv[])
{
    // POINTER CODE
    /*
    int val = 5;            // stack
    int* hval = new int;    // heap
    *hval = 5;              // dereference

    delete hval;
    hval = nullptr;
    // We can also do the following for arrays

    int a[5];               // stack or static array
    int* ha = new int[5];   // heap
    ha[3] = 10;


    delete[] ha;
    ha = nullptr;
    */


    // READ raiiImplementation

    DynamicArray<float> arr(10); // mem allocated
    arr[0] = 2;
    arr[5] = 21;

    int a = 10;

    for(int i = 0; i < arr.getSize(); i++)
    {
        Print<float>::pp(arr[i]); // Namespace in pointerPrint header
    }
    return 0;
} // Whene we leave the scope our class deallocated, destructor is called, we are the garbage collector in our classes