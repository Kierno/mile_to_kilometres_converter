#include <iostream>

int main()
{
	double m;
	std::cout << "Введите количесто миль, чтобы перевести их в километры \n";
	std::cin >> m;
	std::cout << m << " миль равно " << m * 1.609 << " километров.";
}