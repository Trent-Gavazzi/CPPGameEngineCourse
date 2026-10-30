#include <iostream>

// Memory management review
/* 
Stack must be known at compile time
Heap has memory allocated during runtime
    - "return int" returns a pointer to new point in mem
    - The pointer to the new mem lives on the stack but the data on the heap
Memory is cleared in reverse order
ALWAYS GIVE A DEFAULT VALLUE EX: int * p {};
*/
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

    int a[5];               // stack
    int* ha = new int[5];   // heap
    ha[3] = 10;


    delete[] ha;
    ha = nullptr;
    */



    return 0;
}