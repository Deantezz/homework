#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int days;
    cout << "#task1\n";
    cout << "Введите номер дня недели(1-7): \n";
    cin >> days;
    switch (days) {
    case 1:
        cout << "Понедельник\n";
        break;
    case 2:
        cout << "Вторник\n";
        break;
    case 3:
        cout << "Среда\n";
        break;
    case 4:
        cout << "Четверг\n";
        break;
    case 5:
        cout << "Пятница\n";
        break;
    case 6:
        cout << "Суббота\n";
        break;
    case 7:
        cout << "Воскресенье\n";
        break;
    default:
        cout << "Неверный номер дня недели!\n";
    }

    cout << "\n#task2\n";
    int a, b;
    cout << "Введите два числа через пробел: \n";
    cin >> a >> b;
    char sym;
    cout << "Выберите операцию:\n" << "+ - Сумма\n" << "- - Разность\n"
        << "* - Произведение\n" << "/ - Частное\n";
    cin >> sym;
    switch (sym) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Некорректный ввод!\n";
    }

    cout << "\n#task3\n";
    enum Season { WINTER, SPRING, SUMMER, AUTUMN };
    int seasons;
    cout << "Введите номер сезона года (0-3)\n";
    cin >> seasons;
    switch (seasons) {
    case WINTER:
        cout << "Зима, средняя температура -25°C\n";
        break;
    case SPRING:
        cout << "Весна, средняя температура +10°C\n";
        break;
    case SUMMER:
        cout << "Лето, средняя температура +30°C\n";
        break;
    case AUTUMN:
        cout << "Осень, средняя температура +5°C\n";
        break;
    default:
        cout << "Неверный ввод, введите число от (0-3)\n";
    }

    cout << "\n#task4\n";
    int menu;
    cout << "1. Приветствие\n" << "2. Текущее время (заглушка)\n"
        << "3. Калькулятор (заглушка)\n" << "4. Выход\n";
    cin >> menu;
    switch (menu) {
    case 1:
        cout << "Привет мир\n";
        break;
    case 2:
        cout << "Текущее время\n";
        break;
    case 3:
        cout << "Калькулятор\n";
        break;
    case 4:
        cout << "Выход\n";
        break;
    }

    cout << "\n#task5\n";
    enum Grade { A, B, C, D, F };
    char ch5;
    cout << "Введите символ (A-F): \n";
    cin >> ch5;
    char studentGrade;
    switch (ch5) {
    case 'A': case 'a': studentGrade = A;
        break;
    case 'B': case 'b': studentGrade = B;
        break;
    case 'C': case 'c': studentGrade = C;
        break;
    case 'D': case 'd': studentGrade = D;
        break;
    case 'F': case 'f': studentGrade = F;
        break;
    }
    switch (studentGrade) {
    case A:
        cout << "Отлично (5)";
        break;
    case B:
        cout << "Хорошо (4)";
        break;
    case C:
        cout << "Удовлетворительно (3)";
        break;
    case D:
        cout << "Слабо (2)";
        break;
    case F:
        cout << "Неудовлетворительно (2)";
        break;
    }


    cout << "\n#task6\n";
    int hours;
    cout << "Введите текущий час (0-23): \n";
    cin >> hours;
    switch (hours) {
    case 1: case 2: case 3: case 4: case 5:
        cout << "Ночь\n";
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        cout << "Утро\n";
        break;
    case 12: case 13: case 14: case 15: case 16: case 17:
        cout << "День\n";
        break;
    case 18: case 19: case 20: case 21: case 22: case 23:
        cout << "Вечер\n";
        break;
    }

    cout << "\n#task7\n";
    enum Direction { UP, DOWN, LEFT, RIGHT };
    char ch6;
    char moveDirection;
    cout << "Введите символ (w - вверх, s - вниз, a - влево, d - вправо)";
    cin >> ch6;
    switch (ch6) {
    case 'W': case 'w':
        moveDirection = UP;
    case 'S': case 's':
        moveDirection = DOWN;
    case 'A': case 'a':
        moveDirection = LEFT;
    case 'D': case 'd':
        moveDirection = RIGHT;
    }
    switch (moveDirection) {
    case UP:
        cout << "(0, +1)";
        break;
    case DOWN:
        cout << "(0, -1)";
        break;
    case LEFT:
        cout << "(-1, 0)";
        break;
    case RIGHT:
        cout << "(+1, 0)";
        break;
    default:
        cout << "Неверный ввод!";
    }

    cout << "\n#task8\n";
    int num8;
    cout << "Введите число 1-10: ";
    cin >> num8;
    switch (num8) {
    case 1:
        cout << "1 - I";
        break;
    case 2:
        cout << "2 - II";
        break;
    case 3:
        cout << "3 - III";
        break;
    case 4:
        cout << "4 - IV";
        break;
    case 5:
        cout << "5 - V";
        break;
    case 6:
        cout << "6 - VI";
        break;
    case 7:
        cout << "7 - VII";
        break;
    case 8:
        cout << "8 - VIII";
        break;
    case 9:
        cout << "9 - IX";
        break;
    case 10:
        cout << "10 - X";
        break;
    default:
        cout << "Неверный ввод";
    }

    cout << "\n#task9\n";
    enum OrderStatus { NEW, PAID, SHIPPED, DELIVERED, CANCELLED };
    char status;
    int num9;
    cout << "Введите номер(0-4) для получения статуса заказа: ";
    cin >> num9;
    switch (num9) {
    case 0:
        status = NEW;
        break;
    case 1:
        status = PAID;
        break;
    case 2:
        status = SHIPPED;
        break;
    case 3:
        status = DELIVERED;
        break;
    case 4:
        status = CANCELLED;
        break;
    default:
        cout << "Некорректный ввод!";
    }
    switch (status) {
    case NEW:
        cout << "Заказ создан. Ожидается оплата.";
        break;
    case PAID:
        cout << "Оплачен. Готовится к отправке.";
    case SHIPPED:
        cout << "Отправлен. Ожидайте доставку.";
        break;
    case DELIVERED:
        cout << "Доставлен. Спасибо за покупку!";
        break;
    case CANCELLED:
        cout << "Отменён. Обратитесь в поддержку";
        break;
    }

    cout << "\n#task10\n";
    char ch10;
    cout << "Введите первую букву цвета светафора(r, y, g): ";
    cin >> ch10;
    switch (tolower(ch10)) {
    case 'r':
        cout << "Стоп";
        break;
    case 'y':
        cout << "Приготовиться";
        break;
    case 'g':
        cout << "Можно ехать";
        break;
    default:
        cout << "Неверный ввод!";
    }

    cout << "\n#task11\n";
    char level;
    enum AccessLevel { GUEST, USER, MODERATOR, ADMIN };
    int num11;
    cout << "Введите уровень доступа (0-3): ";
    cin >> num11;
    switch (num11) {
    case 0:
        level = GUEST;
        break;
    case 1:
        level = USER;
        break;
    case 2:
        level = MODERATOR;
        break;
    case 3:
        level = ADMIN;
        break;
    }
    switch (level) {
    case GUEST:
        cout << "Гость: только просмотр \n Права:\n - Просматривать сообщения";
    case USER:
        cout << "Пользователь: просмотр и редактирование \n Права:\n - Просматривать сообщения \n - редактировать свои данные";
    case MODERATOR:
        cout << "Модератор: удаление сообщений, блокировка \n Права:\n - Удалять сообщения \n - Блокировать пользователей";
    case ADMIN:
        cout << "Администратор: Полный доступ \n Права:\n - Удалять сообщения \n - Блокировать пользователей \n - Просматривать жалобы";
    }


    cout << "\n#task12\n";
    double num12;
    char ch12;
    cout << "Введите расстояние в метра и через пробел единицу измерения в которую нужно перевести\n"
        << "m - Миллиметры\n c - сантиметры\n d - дециметры\n k - километры\n i - дюймы\n f - футы\n";
    cin >> num12 >> ch12;
    cout << num12 << ch12;
    switch (ch12) {
    case 'm':
        cout << num12 << "м" << num12 * 1000 << "мм\n";
        break;
    case 'с':
        cout << num12 << "м" << num12 * 100 << "см\n";
        break;
    case 'd':
        cout << num12 << "м" << num12 * 10 << "дм\n";
        break;
    case 'k':
        cout << num12 << "м" << num12 / 1000 << "км\n";
        break;
    case 'i':
        cout << num12 << "м" << num12 * 39 << "дюймов\n";
        break;
    case 'f':
        cout << num12 << "м" << num12 * 3 << "футов\n";
        break;
    default:
        cout << "Неверный ввод!";
        break;
    }
    return 0;
}

