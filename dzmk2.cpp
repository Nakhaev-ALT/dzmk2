#include <iostream>
#include <cmath>  // для abs()
using namespace std;

int main() {
    int выбор;
    double A, B, C, угол;

    cout << "Выберите задачу:\n";
    cout << "1. Найти отрезки AC и BC\n";
    cout << "2. Преобразовать угол в радианы\n";
    cout << "Ваш выбор (1 или 2): ";
    cin >> выбор;

    if (выбор == 1) {
        cout << "Введите A, B, C: ";
        cin >> A >> B >> C;

        double AC = abs(A - C);
        double BC = abs(B - C);
        double сумма = AC + BC;

        cout << "AC: " << AC << endl;
        cout << "BC: " << BC << endl;
        cout << "Сумма: " << сумма << endl;
    }
    else if (выбор == 2) {
        cout << "Введите угол в градусах: ";
        cin >> угол;

        if (угол >= 0 && угол < 360) {
            double радианы = (угол * 3.14159) / 180.0;
            cout << "Радианы: " << радианы << endl;
        }
        else {
            cout << "Ошибка: угол должен быть от 0 до 360!" << endl;
        }
    }
    else {
        cout << "Неправильный выбор!" << endl;
    }

    return 0;
}
