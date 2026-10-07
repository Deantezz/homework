#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "#task1\n";
    int num1;
    cout << "Введите число: ";
    cin >> num1;
    if (num1 % 2 == 0){
        cout << "Число " << num1 << " является четным";
    }
    else {
        cout << "Число " << num1 << " не является четным";
    }
    
    cout << "\n#task2\n";
    int num_a, num_b, num_c;
    cout << "Введите три числа через пробел: ";
    cin >> num_a >> num_b >> num_c;
    int max_num;
    if (num_a > num_b) {
        max_num = num_a;
    }
    else if (num_b > num_c){
        max_num = num_b;
    }
    else if (num_c > num_a) {
        max_num = num_c;
    }
    else {
        max_num = num_c;
    }
    cout << "Наибольшее число " << max_num;

    cout << "\n#task3\n";
    int num3;
    cout << "Введите число: ";
    cin >> num3;
    if (num3 > 0) {
        cout << "Число " << num3 << " положительное";
    }
    else if (num3 < 0) {
        cout << "Число " << num3 << " отрицательное";
    }
    else {
        cout << "Число " << num3 << " равно нулю";
    }

    cout << "\n#task4\n";
    int num4;
    cout << "Введите кол-во баллов ";
    cin >> num4;
    if (num4 >= 90) {
        cout << "Ваша оценка Отлично";
    }
    else if (num4 >= 75) {
        cout << "Ваша оценка Хорошо";
    }
    else if (num4 >= 60) {
        cout << "Ваша оценка Удовлетворительно";
    }
    else {
        cout << "Ваша оценка Неудовлетворительно";
    }
    
    cout << "\n#task5\n";
    int num5;
    cout << "Введите год ";
    cin >> num5;
    if (num5 % 400 == 0 || (num5 % 4 == 0 && num5 % 100 != 0)) {
        cout << num5 << " високосный год";
    }
    else {
        cout << num5 << " не високосный год";
    }

    cout << "\n#task7\n";
    double a, b, c;
    cout << "Введите длины трёх отрезков через пробел: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Равносторонний";
        }
        else if (a == b || a == c || b == c) {
            cout << "Равнобедренный";
        }
        else {
            cout << "Разносторонний";
        }

    }
    else {
        cout << "Треугольник построить нельзя";
    }

    cout << "\n#task8\n";
    double num8a, num8b;
    char oper;
    cout << "Введите два числа через пробел: ";
    cin >> num8a >> num8b;
    cout << "Введите операцию: ";
    cin >> oper;
    if (oper == '+') {
        cout << num8a + num8b;
    }
    else if (oper == '-') {
        cout << num8a - num8b;
    }
    else if (oper == '*') {
        cout << num8a * num8b;
    }
    else if (oper == '/') {
        cout << num8a / num8b;
    }
    else if (oper == '/') {
        if (num8b == 0) {
            cout << "Невозможно выполнить операцию";
        }
        else {
            cout << num8a / num8b;
        }
    }

    cout << "\n#task9\n";
    int num9;
    cout << "Введите сумму покупки: ";
    cin >> num9;
    if (num9 > 10000) {
        cout << "Итоговая сумма: " << num9 - (num9 * 15 / 100 );
    }
    else if (num9 >= 5000) {
        cout << "Итоговая сумма: " << num9 - (num9 * 10 / 100 );
    }
    else if (num9 >= 1000) {
        cout << "Итоговая сумма: " << num9 - (num9 * 5 / 100 );
    }
    else {
        cout << "Итоговая сумма: " << num9;
    }
    
    cout << "\n#task10\n";
    int num10;
    cout << "Введите текущий час: ";
    cin >> num10;
    if (num10 >= 25) {
        cout << "Ошибка";
    }
    else if (num10 >= 23) {
        cout << "Доброй ночи";
    }
    else if (num10 >= 18) {
        cout << "Добрый вечер";
    }
    else if (num10 >= 12) {
        cout << "Добрый день";
    }
    else if (num10 >= 6) {
        cout << "Доброе утро";
    }
    else if (num10 >= 5) {
        cout << "Доброй ночи";
    }
}

