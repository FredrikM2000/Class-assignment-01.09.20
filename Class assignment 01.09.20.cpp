#include <iostream>


int age;

int main()
{
	std::cout << "Enter your age: ";
	std::cin >> age;

	if (age >= 20) {
		std::cout << "You are an adult";
	}
	else {
		std::cout << "You are a teenager";
	}
}

