#include <iostream>

int main()
{
	std::string answer{ "малина" };
	std::string guess{};

	std::cout << "Угадайте слово: ";
	std::cin >> guess;

	while (answer != guess)
	{
		std::cout << "Неправильно" << '\n';
		guess.clear();
		std::cout << "Угадайте слово: ";
		std::cin >> guess;
	}
	std::cout << "Правильно! Вы победили! Загаданное слово — " << guess << "\n\n\n";
	return EXIT_SUCCESS;
}