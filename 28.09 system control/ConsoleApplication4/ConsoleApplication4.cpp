#include <iostream> //подгрузка стандартных библиотек ввода и вывода

using namespace std; // пространство имен

int main()// основная функция программы
{
	setlocale(LC_ALL, "Russian");

	cout << "#task1\n";
	string num;
	cout << "Введите шестизначное число: ";
	cin >> num;
	if (num.length() != 6) {
		cout << "Ошибка число должно быть шестизначным";
		return 1;
	}

	int sum_first = (num[0] - '0') + (num[1] - '0') + (num[2] - '0');
	int sum_second = (num[3] - '0') + (num[4] - '0') + (num[5] - '0');

	if (sum_first == sum_second) {
		cout << "Число " << num << " является счастливым";
	}
	else {
		cout << "Число " << num << " не является счастливым";
	}

	cout << "\n#task2\n";
	string num1;
	cout << "Введите четырехзначное число: ";
	cin >> num1;
	if (num1.length() != 4) {
		cout << "Ошибка число должно быть четырехзначным";
		return 1;
	}
	else {
		swap(num1[0], num1[1]);
		swap(num1[2], num1[3]);
		
		cout << "Результат: " << num1;
	}

	cout << "\n#task3\n";
	int max_num;
	cout << "Введите 7 целых чисел через пробел или Enter:\n";
	cin >> max_num;

	for (int i = 1; i < 7; i++) {
		int current;
		cin >> current;

		if (current > max_num) {
			max_num = current;
		}
	}

	cout << "Максимальное число: " << max_num;

	return 0;
}



