#include <iostream>
#include <clocale>

using namespace std;

int main() {
    // Настройка локализации для вывода кириллицы
    setlocale(LC_ALL, "Russian");

    cout << "--- КАЛЬКУЛЯТОР ПРИЗЫВА СКЕЛЕТОВ ---\n\n";

    int mana = 0; // Запас маны
    int cost = 0; // Стоимость призыва

    cout << "Введите текущий запас маны: ";
    if (!(cin >> mana)) return 1;

    cout << "Введите стоимость призыва одного скелета: ";
    if (!(cin >> cost)) return 1;

    if (mana < 0 || cost <= 0) return 1;

    // Расчет количества юнитов и остатка маны
    int army = mana / cost;       
    int rest_mana = mana % cost;  

    cout << (army > 0 ? "\n[РИТУАЛ ЗАВЕРШЕН] Армия призвана!\n" : "\n[ВНИМАНИЕ] Недостаточно маны.\n");
    cout << "Максимальный размер армии: " << army << " скелетов.\n";
    cout << "Остаток маны: " << rest_mana << " ед.\n";

    return 0;
}
