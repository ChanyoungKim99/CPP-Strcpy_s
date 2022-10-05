#include <iostream>
#include <cstring>

int main()
{
	char str1[6]{ "Doggy" };
	char str2[6]{};

	strcpy_s(str2, 6, str1);

	std::cout << str2 << std::endl;
}