#include <iostream>

enum class Month {
	January = 1, February, March, April, May, June,
	July, August, September, October, November, December
};

int main() 
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	while (true) 
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> number;

		if (number == 0) 
		{
			std::cout << "До свидания!";
			break;
		}
		else if (number >= 13) 
		{
			std::cout << "Неправильное значение!\n";
		}
		
		Month months = static_cast<Month>(number);
		switch (months)
		{
		case Month::January:
			std::cout << "Январь\n";
			break;
		case Month::February:
			std::cout << "Февраль\n";
			break;
		case Month::March:
			std::cout << "Март\n";
			break;
		case Month::April:
			std::cout << "Апрель\n";
			break;
		case Month::May:
			std::cout << "Май\n";
			break;
		case Month::June:
			std::cout << "Июнь\n";
			break;
		case Month::July:
			std::cout << "Июль\n";
			break;
		case Month::August:
			std::cout << "Август\n";
			break;
		case Month::September:
			std::cout << "Сентябрь\n";
			break;
		case Month::October:
			std::cout << "Октябрь\n";
			break;
		case Month::November:
			std::cout << "Ноябрь\n";
			break;
		case Month::December:
			std::cout << "Декабрь\n";
			break;

		default:
			break;
		}
	}
}