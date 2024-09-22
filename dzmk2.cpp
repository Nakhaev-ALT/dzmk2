#include <iostream>
#include <cmath>    // для функції abs()
#include <cstdlib>  // для system("cls")
using namespace std;

void calculateSegments() {
    // Задача 1: Знаходимо довжини відрізків AC і BC та їх суму
    double A, B, C;

    cout << "Введіть координати A, B, C: ";
    cin >> A >> B >> C;

    double AC = abs(A - C);
    double BC = abs(B - C);
    double sum = AC + BC;

    cout << "Довжина AC: " << AC << endl;
    cout << "Довжина BC: " << BC << endl;
    cout << "Сума відрізків: " << sum << endl;
}

void convertAngleToRadians() {
    // Задача 2: Переводимо кут з градусів у радіани
    double alpha;
    cout << "\nВведіть кут в градусах: ";
    cin >> alpha;

    if (alpha >= 0 && alpha < 360) {
        const double pi = 3.14159;
        double radians = (alpha * pi) / 180.0;
        cout << "Кут в радіанах: " << radians << endl;
    }
    else {
        cout << "Помилка: кут має бути від 0 до 360!" << endl;
    }
}

int main() {
    char answer;
    do {
        system("cls");  // очищення консолі перед кожним новим запуском

        cout << "Оберіть задачу:\n";
        cout << "1. Знаходження відрізків AC і BC\n";
        cout << "2. Перетворення кута з градусів в радіани\n";
        cout << "Ваш вибір (1 або 2): ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            calculateSegments();
        }
        else if (choice == 2) {
            convertAngleToRadians();
        }
        else {
            cout << "Неправильний вибір!" << endl;
        }

        cout << "\nБажаєте спробувати ще раз? (y/n): ";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');

    return 0;
}