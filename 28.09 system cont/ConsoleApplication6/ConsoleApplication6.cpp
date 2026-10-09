#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    cout << "\n#task1\n";
    cout << "Пиццы:\n";
    cout << "1 - Пепперони     $14.00\n";
    cout << "2 - Четыре сыра   $15.00\n";
    cout << "3 - Маргарита     $12.00\n";
    cout << "4 - Гавайская     $18.00\n";
    cout << "Выберите код пиццы: ";
    int pizzaCode;
    cin >> pizzaCode;

    cout << "Введите количество пицц: ";
    int countPizza;
    cin >> countPizza;

    cout << "\nНапитки:\n";
    cout << "5 - Мохито  $5.00\n";
    cout << "6 - Кола    $3.00\n";
    cout << "7 - Фанта   $2.00\n";
    cout << "Выберите код напитка: ";
    int drinkCode;
    cin >> drinkCode;

    cout << "Введите количество напитков: ";
    int countDrink;
    cin >> countDrink;

    double pricePizza = 0;
    string namePizza;
    switch (pizzaCode) {
    case 1: pricePizza = 14; namePizza = "Пепперони";   break;
    case 2: pricePizza = 15; namePizza = "Четыре сыра"; break;
    case 3: pricePizza = 12; namePizza = "Маргарита";   break;
    case 4: pricePizza = 18; namePizza = "Гавайская";   break;
    default:
        cout << "Неверный код пиццы!\n";
        return 1;
    }

    double priceDrink = 0;
    string nameDrink;
    switch (drinkCode) {
    case 5: priceDrink = 5; nameDrink = "Мохито"; break;
    case 6: priceDrink = 3; nameDrink = "Кола";   break;
    case 7: priceDrink = 2; nameDrink = "Фанта";  break;
    default:
        cout << "Неверный код напитка!\n";
        return 1;
    }

    int freePizzas = countPizza / 5;               
    int paidPizzas = countPizza - freePizzas;      
    double sumPizza = paidPizzas * pricePizza;

    double sumDrink = countDrink * priceDrink;

    if (priceDrink > 2 && countDrink > 3) {
        sumDrink *= 0.85;   
    }

    double total = sumPizza + sumDrink;

    if (total > 50) {
        total *= 0.80;
    }

    cout << fixed << setprecision(2);
    cout << namePizza << " — " << countPizza << " шт. — $" << sumPizza << endl;
    if (freePizzas > 0) {
        cout << "  (из них " << freePizzas << " шт. бесплатно)\n";
    }
    cout << nameDrink << " — " << countDrink << " шт. — $" << sumDrink << endl;
    cout << "Итого к оплате: $" << total << endl;

    return 0;
}

