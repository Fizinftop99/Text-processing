#include <locale>
#include <iostream>
#include <iomanip>
#include <Windows.h>

int main() {
	std::cout.imbue(std::locale::locale("ru_RU.UTF8"));
	std::cin.imbue(std::locale::locale("en_US.UTF8"));
	const double USD_currency = 80.7;
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	long double value;
	while (std::cin >> std::get_money(value, true)) {
		value *= USD_currency;
		std::cout << std::showbase << std::put_money(value, true) << std::endl;
	}
	return 0;
}
