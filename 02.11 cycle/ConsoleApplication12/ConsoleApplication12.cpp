#include <iostream>

int main(){
	setlocale(LC_ALL, "Russian");
	std::cout << "#task1\n";
	int num1;
	std::cout << "Введите число: ";
	std::cin >> num1;
	for (int i = num1; i > 0; i = i / 10) {
		std::cout << i % 10;
	}

	std::cout << "\n#task2\n";
	std::cout << "Введите число: ";
	int num2;
	int summ = 0;
	std::cin >> num2;
	for(int i = num2; i > 0; i = i / 10) {
		summ += i % 10;
	}
	std::cout << "Сумма цифр числа " << num2 << " равна: " << summ;

	std::cout << "\n#task3\n";
	int days3;
	std::cout << "Введите количество дней: ";
	std::cin >> days3;
	int num3 = 15;
	for (int i = 1; i <= days3; i++) {
		num3 = days3 * (days3 + 14);
	}
	std::cout << "Улитка проползет " << num3 << " см за " << days3 << " дней";

	std::cout << "\n#task4\n";
	int num4;
	int count_orel = 0;
	int count_reshka = 0;
	for(int i = 1; i <= 9; i++) {
		std::cout << "Введите число 1 - решка 0 - орел ";
		std::cin >> num4;
		if (num4 == 1) {
			count_reshka++;
		}
		else if (num4 == 0) {
			count_orel++;
		}
		else {
			std::cout << "Ошибка ввода\n";
		}
	}
	if (count_orel % 2 == 0) {
		std::cout << "Решение в положительную сторону\n";
	}
	else {
		std::cout << "Решение в отрицательную сторону\n";
	}

	std::cout << "#task5\n";
	int month_number;
	int day_number;
	int days_in_month;
	std::cout << "Введите номер месяца(1-12): ";
	std::cin >> month_number;
	std::cout << "Введите номер дня(1-7): ";
	std::cin >> day_number;
	switch (month_number) {
		case 1:
			std::cout << "\t\tЯнварь ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "\t\tФевраль ";
			days_in_month = 28;
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "\t\tМарт ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 4:
			std::cout << "\t\tАпрель ";
			days_in_month = 30;
			std::cout << std::endl;
			break;
		case 5:
			std::cout << "\t\tМай ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 6:
			std::cout << "\t\tИюнь ";
			days_in_month = 30;
			std::cout << std::endl;
			break;
		case 7:
			std::cout << "\t\tИюль ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 8:
			std::cout << "\t\tАвгуст ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 9:
			std::cout << "\t\tСентябрь ";
			days_in_month = 30;
			std::cout << std::endl;
			break;
		case 10:
			std::cout << "\t\tОктябрь ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
		case 11:
			std::cout << "\t\tНоябрь ";
			days_in_month = 30;
			std::cout << std::endl;
			break;
		case 12:
			std::cout << "\t\tДекабрь ";
			days_in_month = 31;
			std::cout << std::endl;
			break;
	}
	std::cout << "Mo\t Tu\t We\t Th\t Fr\t Sa\t Su\n";
	int empty = day_number - 1;
	for (int i = 0; i < empty; i++) {
		std::cout << "  \t";
	}

	int weekends = 0;
	int currentday = day_number;

	for (int i = 1; i <= days_in_month; i++) {
		std::cout << i << " \t";

		if (currentday == 6 || currentday == 7) {
			weekends++;
		}

		if (currentday == 7) {
			std::cout << std::endl;
			currentday = 1;
		}
		else {
			currentday++;
		}
	}
	if (currentday != 1) {
		std::cout << std::endl;
	}

	std::cout << "Количество выходных дней в месяце: " << weekends << std::endl;

	return 0;
}