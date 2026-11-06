#include <iostream>

int main() {
	setlocale(LC_ALL, "Ru");
	std::cout << "#task1\n";
	for (int i = 10; i <= 15; i++) {
		std::cout << i << " - ";
		for (int j = 1; j <= 9; j++) {
			if (i % j == 0) {
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
	}

	std::cout << "#task2\n";
	for (int i = 2; i <= 1000; i++) {
		bool isPrime = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << i << " ";
		}
	}
	std::cout << "\n";

	std::cout << "#task3\n";
	int size;
	std::cout << "Введите размер фигуры ";
	std::cin >> size;
	if (size <= 0 || size % 2 == 0) {
		std::cout << "ошибка число должно быть положительным и отрицательным!";
		return 1;
	}
	int center = size / 2;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == center || j == center || i == j || (i + j == size - 1)) {
				std::cout << "* ";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}

	std::cout << "#task4\n";
	int count = 0;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == j) continue;
			for (int k = 0; k <= 9; k++) {
				if (k == i || k == j) continue; 
					std::cout << i << j << k << " ";
					count++;
			}
		}
	}
	std::cout << "\nКоличество комбинаций: " << count << std::endl;
	std::cout << "Время в худшем случае: " << count * 3 << " секунд" << std::endl;

	std::cout << "#task5\n";
	const int N = 12;                 
	double march[N], april[N], may[N];
	double quarter[N];                
	double total = 0;                
	for (int i = 0; i < N; i++) {
		std::cout << "\nСотрудник №" << (i + 1) << std::endl;
		std::cout << "  Зарплата за март: ";
		std::cin >> march[i];
		std::cout << "  Зарплата за апрель: ";
		std::cin >> april[i];
		std::cout << "  Зарплата за май: ";
		std::cin >> may[i];

		quarter[i] = march[i] + april[i] + may[i];
		total += quarter[i];
	}
	std::cout << "Выплаты за квартал:\n";
	for (int i = 0; i < N; i++) {
		std::cout << "Сотрудник №" << (i + 1) << ": " << quarter[i] << " руб." << std::endl;
	}
	std::cout << "Общая выплата по всем сотрудникам: "
		<< total << " руб." << std::endl;

	return 0;
}