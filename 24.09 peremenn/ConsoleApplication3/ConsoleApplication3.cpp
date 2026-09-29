#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	cout << "#task1\n";
	cout << "Hello, world!";

	cout << "\n#task2";
	int num1;
	int num2;
	cout << "\nВведите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	int summ = num1 + num2;
	cout << "Сумма ваших чисел: " << summ;

	cout << "\n#task3\n";
	int num3;
	int num4;
	cout << "Введите первое число: ";
	cin >> num3;
	cout << "Введите второе число: ";
	cin >> num4;
	int summ1 = num3 + num4;
	cout << "\nСумма ваших чисел: " << summ1;
	int raznost = num3 - num4;
	cout << "\nРазность ваших чисел: " << raznost;
	int proizved = num3 * num4;
	cout << "\nПроизведение ваших чисел: " << proizved;
	int delen_cel = num3 / num4;
	cout << "\nЦелая часть от деления ваших чисел: " << delen_cel;
	int delen_ost = num3 % num4;
	cout << "\nОстаток от деления ваших чисел: " << delen_ost;

	cout << "\n#task4\n";
	double shirina;
	double dlina;
	cout << "Введите ширину прямоугольника: ";
	cin >> shirina;
	cout << "Введите длину прямоугольника: ";
	cin >> dlina;
	double perimetr = 2 * (shirina + dlina);
	double ploshad = shirina * dlina;
	cout << "Периметр: " << perimetr;
	cout << "Площадь: " << ploshad;

	cout << "\n#task5\n";
	int num41;
	int num42;
	int num43;
	cout << "Введите первое число: ";
	cin >> num41;
	cout << "Введите второе число: ";
	cin >> num42;
	cout << "Введите третье число: ";
	cin >> num43;
	double summ41 = (num41 + num42 + num43) / 3;
	cout << "Среднее арифметическое ваших чисел: " << summ41;

	cout << "\n#task6\n";
	int secund;
	cout << "Введите кол-во секунд: ";
	cin >> secund;
	double hours = secund / 3600;
	double minutes = (secund % 3600) / 60;
	double secunds = secund % 60;
	cout << hours << ":" << minutes << ":" << secunds;

	cout << "\n#task7\n";
	const double a = 9;
	const double b = 5;
	double temp;
	cout << "Введите температуру в целсиях: ";
	cin >> temp;
	double fareng = temp * a / b + 32;
	cout << "Температура в фаренгейт: " << fareng;

	cout << "\n#task8\n";
	double radius;
	const double pi = 3.14159;
	cout << "Введите радиус окружности: ";
	cin >> radius;
	double dlina8 = 2 * pi * radius;
	double ploshad8 = pi * radius * radius;
	cout << "Длина: " << dlina8;
	cout << "\nПлощадь: " << ploshad8;

	cout << "\n#task9\n";
	string num9;
	cout << "Введите четырехзначное число: ";
	cin >> num9;
	int summ9 = (num9[0] - '0') + (num9[1] - '0') + (num9[2] - '0') + (num9[3] - '0');
	int proiz9 = (num9[0] - '0') * (num9[1] - '0') * (num9[2] - '0') * (num9[3] - '0');
	cout << "Сумма: " << summ9 << "\nПроизведение: " << proiz9;

	cout << "\n#task10\n";
	double hours_stav;
	double hours_otrab;
	double premka;
	cout << "Введите почасовую ставку: ";
	cin >> hours_stav;
	cout << "Введите кол-во отработанных часов: ";
	cin >> hours_otrab;
	cout << "Введите премию: ";
	cin >> premka;
	const double tax = 0.13;
	double summ10 = hours_stav * hours_otrab + premka;
	double nalog = summ10 * tax;
	double chistie = summ10 - nalog;
	cout << "Начисленная сумма: " << summ10 << "\nСумма налога: " << nalog << "\nСумма на руки: " << chistie;

	cout << "\n#task11\n";
	string num11;
	cout << "Введите девятизначное число: ";
	cin >> num11;
	int summ11 = (num11[0] - 0) + (num11[1] - 0) + (num11[2] - 0) + (num11[3] - 0) + (num11[4] - 0) +
		(num11[5] - 0) + (num11[6] - 0) + (num11[7] - 0) + (num11[8] - 0);
	int proiz11 = (num11[0] - 0) * (num11[1] - 0) * (num11[2] - 0) * (num11[3] - 0) * (num11[4] - 0) *
		(num11[5] - 0) * (num11[6] - 0) * (num11[7] - 0) * (num11[8] - 0);
	int perevert = (num11[8] + num11[7] + num11[6] + num11[5] + num11[4] + num11[3] + num11[2] + num11[1] + num11[0]);
	int summChered = (num11[0] - 0) - (num11[1] - 0) + (num11[2] - 0) - (num11[3] - 0) + (num11[4] - 0) -
		(num11[5] - 0) + (num11[6] - 0) - (num11[7] - 0) + (num11[8] - 0);
	int neChet = (num11[8] + num11[6] + num11[4] + num11[2] + num11[0]);
	int num11int = (num11[0] + num11[1] + num11[2] + num11[3] + num11[4] + num11[5] + num11[6] + num11[7] + num11[8]);
	bool palindrom = int(num11int) == perevert;
	cout << "Сумма девяти цифр: " << summ11;
	cout << "\nПроизведение девяти цифр: " << proiz11;
	cout << "\nЧисло перевертыш: " << perevert;
	cout << "\nЗнакочередующаяся сумма: " << summChered;
	cout << "\nЧисло составленное только из нечетных позиций: " << neChet;
	cout << "\nПалиндром ли число: " << palindrom;
}