#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value) // This function now has an integer parameter,
//如果没有括号内的，那就不能正确接收到num这个变量
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
	int num { getValueFromUser() };

	printDouble(num);

	return 0;
}