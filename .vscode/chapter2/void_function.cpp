#include<iostream>

//函数是void就没有return了，然后主函数中调用也不需要初始化这个函数的返回值
// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    return 0;
}