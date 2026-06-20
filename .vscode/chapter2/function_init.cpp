#include<iostream>

int inputNumber()
{
    std::cout << "请输出一个数字：" <<'\n';
    int num{};
    std::cin >> num;
    return num;
}

int main()
{
    int input {inputNumber()}; //这一步的初始化接收到的num变量很重要
    std::cout << "最终结果是：" << 2 * input <<'\n';
    return 0;
}