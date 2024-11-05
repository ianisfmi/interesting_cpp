// Type your code here, or load an example.

#include<iostream>
int square(int num) {
    return num * num;
}

class c
{
    public:
    void printSomething()
    {
        std::cout << "printing inside class c";
    }
};

int main()
{
    c* obj = nullptr;
    obj->printSomething();
}