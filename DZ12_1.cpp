#include <iostream>

int main()
{
	std::string stringName{};
	std::string stringSurname{};

	std::cout << "Введите имя: ";
	std::cin >> stringName;
	std::cout << "Введите фамилию: ";
	std::cin >> stringSurname;

	stringName = stringName + ' ' + stringSurname;
	std::cout << "Здравствуйте, " << stringName << '!' << "\n\n\n";

	return EXIT_SUCCESS;

}
