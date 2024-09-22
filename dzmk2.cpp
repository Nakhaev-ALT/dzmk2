#include <iostream>
#include <cmath>  // for abs()
using namespace std;

int main() {
    int choice;
    double A, B, C, angle;

    cout << "Choose a task:\n";
    cout << "1. Find segments AC and BC\n";
    cout << "2. Convert angle to radians\n";
    cout << "Your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter A, B, C: ";
        cin >> A >> B >> C;

        double AC = abs(A - C);
        double BC = abs(B - C);
        double sum = AC + BC;

        cout << "AC: " << AC << endl;
        cout << "BC: " << BC << endl;
        cout << "Sum: " << sum << endl;
    }
    else if (choice == 2) {
        cout << "Enter angle in degrees: ";
        cin >> angle;

        if (angle >= 0 && angle < 360) {
            double radians = (angle * 3.14) / 180.0;  // Using 3.14 for π
            cout << "Radians: " << radians << endl;
        }
        else {
            cout << "Error: angle must be between 0 and 360!" << endl;
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
