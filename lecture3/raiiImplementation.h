#include <iostream>

// Basic example of RAII class
// Remember ~ specifies a destructor
// With templates we can make this class usable with ANY datatype with a template argument
template <typename T>
class DynamicArray
{
    T * array;
    size_t m_size;

    public: 
        DynamicArray() : array(nullptr), m_size(0) {}

        DynamicArray(size_t size)
        : m_size(size)
        {
            array = new T [size];
        }

        ~DynamicArray() { delete [] array;}
        T & operator [] (size_t i) {return array[i];} 

        int getSize() {return m_size;}
};