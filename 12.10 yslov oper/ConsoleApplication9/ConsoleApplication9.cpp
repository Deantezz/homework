#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "#task1\n";
	int color;
	cout << "Выберите цвет светафора 1 - red, 2 - yellow, 3 - green\n";
	cin >> color;
	switch (color) {
	case 1:
		cout << "Стоять на месте!\n";
		break;
	case 2:
		cout << "Приготовься идти\n";
		break;
	case 3:
		cout << "Можно идти\n";
		break;
	}

	cout << "\n#task2\n";
	string log;
	int pass;
	string login = "admin\n";
	int password = 1234;
	cout << "Введите логин: \n";
	cin >> log;
	cout << "Введите пароль: \n";
	cin >> pass;
	if (login == log && password == pass) {
		cout << "доступ разрешён\n";
	}
	else if (login == log && password != pass) {
		cout << "Неверный пароль\n";
	}
	else {
		cout << "Кто вы такой?\n";
	}

	cout << "\n#task3\n";
	int num3;
	cout << "Введите оценку дня (1-10): \n";
	cin >> num3;
	switch (num3) {
	case 1: case 2: case 3:
		cout << "Держись, все наладится\n";
		break;
	case 4: case 5: case 6:
		cout << "Нормальный день\n";
		break;
	case 7: case 8: case 9: case 10:
		cout << "Отличный день\n";
		break;
	default:
		cout << "Такого дня не существует\n";
	}

	cout << "\n#task4\n";
	char letter;
	char letter1;
	cout << "Введите букву: \n";
	cin >> letter;
	switch (letter) {
	case 'a': letter1 = 'd';
		cout << letter1;
		break;
	case 'b': letter1 = 'e';
		cout << letter1;
		break;
	case 'x': letter1 = 'a';
		cout << letter1;
		break;
	case 'y': letter1 = 'b';
		cout << letter1;
		break;
	case 'z': letter1 = 'c';
		cout << letter1;
		break;
	default:
		cout << "Неверный ввод\n";
	}

	cout << "\n#task5\n";
	char sym5;
	char prover = 'k';
	cout << "Выберите камень, ножницы или бумага('k', 'n, 'b')\n";
	cin >> sym5;
	char choicePlayer = tolower(sym5);
	if (prover == choicePlayer) {
		cout << "Ничья\n";
	}
	else if (choicePlayer == 'n') {
		cout << "Вы проиграли\n";
	}
	else if (choicePlayer == 'b') {
		cout << "Вы победили\n";
	}
	else {
		cout << "неверный ввод\n";
	}


	cout << "\n#task6\n";
	int etag1;
	int etag2;
	cout << "Введите ваш этаж и этаж который требуется через пробел: \n";
	cin >> etag1 >> etag2;
	if (etag1 == etag2) {
		cout << "Вы уже на этом этаже\n";
	}
	else if (etag1 < etag2) {
		cout << "Вы едете вверх\n";
	}
	else if (etag1 > etag2) {
		cout << "Вы едете вниз\n";
	}
	else if (etag1 < 0 || etag2 < 0 || etag1 > 9 || etag2 > 9) {
		cout << "Неверный этаж\n";
	}

	cout << "\n#task7\n";
	char sym7;
	cout << "Введите знак: \n";
	cin >> sym7;
	switch (sym7) {
	case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': case '0':
		cout << "Цифра\n";
		break;
	case '+': case '-': case '*': case '/':
		cout << "Оператор\n";
		break;
	case '(': case ')': case '[': case ']': case '{': case '}':
		cout << "Скобка\n";
		break;
	default:
		cout << "Неизвестный символ\n";
	}

	cout << "\n#task8\n";
	int ch1;
	int ch2;
	int ch3;
	int ch4;
	cout << "Введите координаты коня через пробел где он стоит и куда хочете сходить\n";
	cin >> ch1 >> ch2 >> ch3 >> ch4;
	if ((ch3 == ch1 + 1) && (ch2 + 2 == ch4)) {
		cout << "Ход возможен\n";
	}
	else {
		cout << "Ход невозможен\n";
	}

	cout << "\n#task9\n";
	int num9;
	cout << "Введите число от 1 до 10: \n";
	cin >> num9;
	switch (num9) {
	case 1: cout << "1 - I\n";
		break;
	case 2: cout << "2 - II\n";
		break;
	case 3: cout << "3 - III\n";
		break;
	case 4: cout << "4 - IV\n";
		break;
	case 5: cout << "5 - V\n";
		break;
	case 6: cout << "6 - VI\n";
		break;
	case 7: cout << "7 - VII\n";
		break;
	case 8: cout << "8 - VIII\n";
		break;
	case 9: cout << "9 - IX\n";
		break;
	case 10: cout << "10 - X\n";
		break;
	default:
		cout << "Неверный ввод!";
	}

	cout << "\n#task10\n";
	string num10;
	cout << "Введите шестизначное число: \n";
	cin >> num10;
	if ((num10[0] - '0') + (num10[1] - '0') + (num10[2] - '0') % 2 == 0 && ((num10[3] - '0') + (num10[4] - '0') + (num10[5] - '0') % 2 != 0)) {
		cout << num10 << "\nСчастливый билет!\n";
	}
	else if ((num10[0] - '0') + (num10[1] - '0') + (num10[2] - '0') % 2 != 0 && ((num10[3] - '0') + (num10[4] - '0') + (num10[5] - '0') % 2 == 0)) {
		cout << num10 << "\nСчастливый билет!\n";
	}
	else {
		cout << num10 << "\nНе счастливый билет!\n";
	}

	cout << "\n#task11\n";
	int summ11;
	int rezim;
	cout << "Выберите режим и введите сумму через пробел\n1 - выдать минимальным числом купюр  (5000, 2000, 1000, 500, 200, 100, 50, 10)\n"
		<< "2 - выдать только крупными  (5000, 1000, 100)\n" << "3 - отмена";
	cin >> rezim >> summ11;
	if (summ11 <= 0 || summ11 % 10 != 0) {
		cout << "Число должно быть положительным и кратным 10!";
		return 0;
	}
	switch (rezim) {
	case 1: {
		bool first = true;
		if (summ11 >= 5000) {
			if (!first) cout << ",";
			cout << "5000*" << summ11 / 5000;
			summ11 %= 5000;
		}
		if (summ11 >= 2000) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 2000;
			summ11 %= 2000;
		}
		if (summ11 >= 1000) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 1000;
			summ11 %= 1000;
		}
		if (summ11 >= 500) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 500;
			summ11 %= 500;
		}
		if (summ11 >= 200) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 200;
			summ11 %= 200;
		}
		if (summ11 >= 100) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 100;
			summ11 %= 100;
		}
		if (summ11 >= 50) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 50;
			summ11 %= 50;
		}
		if (summ11 >= 10) {
			if (!first) cout << ",";
			cout << "2000*" << summ11 / 10;
			summ11 %= 10;
		}
		break;
	}
	case 2: {
		if (summ11 % 100 != 0) {
			cout << "Сумму нельзя выдать в выбранном режиме";
		}
		else {
			bool first = true;
			if (summ11 >= 5000) {
				if (!first) cout << ",";
				cout << "5000*" << summ11 / 5000;
				summ11 %= 5000;
			}
			if (summ11 >= 1000) {
				if (!first) cout << ",";
				cout << "5000*" << summ11 / 1000;
				summ11 %= 1000;
			}
			if (summ11 >= 100) {
				if (!first) cout << ",";
				cout << "5000*" << summ11 / 100;
				summ11 %= 100;
			}
			break;
		}
	}
	case 3: {
		cout << "Операция отменена!";
		break;
	}
	default:
		cout << "Нету такого режима!";
	}
	
	cout << "\n#task12\n";
	cin.ignore(32767, '\n');
	cout << "Введите пароль: \n";
	string pass12;
	getline(cin, pass12);

	bool upper = false;
	bool digit = false;
	bool special = false;
	bool space = false;

	for (char c : pass12) {
		if (c >= 'A' && c <= 'Z'){
			upper = true;
		}
		else if (c >= '0' && c <= '9') {
			digit = true;
		}
		else if (c == ' ') {
			space = true;
		}
		else {
			switch(c){
			case '!': case '@': case '#': case '$': case '%':
			case '^': case '&': case '*':
				special = true;
				break;
			default:
				break;
			}
		}
	}
	if (pass12.length() < 8){
		cout << " - Слишком короткий\n";
	}
	if (!upper) {
		cout << " - Нет заглавной буквы\n";
	}
	if (!digit) {
		cout << " - Нет цифр\n";
	}
	if (!special) {
		cout << " - Нет спецсимвола\n";
	}
	if (space) {
		cout << " - Содержит пробелы\n";
	}

	return 0;
}
