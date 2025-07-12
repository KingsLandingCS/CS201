#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
private:
    int number;

public:
    A(int number)
    {
        this->number = number;
    }

    void *operator new(size_t size)
    {
        void *ptr = ::operator new(size);
        return ptr;
    }
    void operator delete(void *ptr)
    {
        free(ptr);
    }

    void display()
    {
        cout << "Number = " << number;
    }
};

int main()
{
    A *ptr;
    ptr = new A(20);
    ptr->display();
    delete ptr;
    return 0;
}