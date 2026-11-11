#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "--- КАЛЬКУЛЯТОР ПРИЗЫВА СКЕЛЕТОВ ---\n\n";

    int mana = 0;
    int cost = 0;

    cout << "Введите текущий запас маны: ";
    if (!(cin >> mana)) {
        cout << "\n[ОШИБКА] Критическая ошибка ввода! Ожидалось число.\n";
        return 1;
    }

    cout << "Введите стоимость призыва одного скелета: ";
    if (!(cin >> cost)) {
        cout << "\n[ОШИБКА] Критическая ошибка ввода! Ожидалось число.\n";
        return 1;
    }

    if (mana < 0 || cost <= 0) {
        cout << "\n[ОШИБКА] Мана не может быть меньше нуля, а стоимость призыва должна быть больше нуля.\n";
        return 1;
    }

    int army = mana / cost;
    int rest_mana = mana % cost;

    if (army > 0) {
        cout << "\n[РИТУАЛ ЗАВЕРШЕН] Армия призвана!\n";
    } else {
        cout << "\n[ВНИМАНИЕ] Недостаточно маны для призыва даже одного скелета.\n";
    }

    cout << "Максимальный размер армии: " << army << " скелетов.\n";
    cout << "Остаток маны: " << rest_mana << " ед.\n";

    return 0;
}
