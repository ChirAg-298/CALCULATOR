#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float num1, num2, res;
    char oprtr, choice;
    bool valid; // to check if the arithmetic is operable

    cout << "Welcome to Calculator!\n";

    do {
        cout << "\nEnter expression (e.g. 5 + 2): ";
        cin >> num1 >> oprtr >> num2;
        valid = true;

        switch (oprtr) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '^': // power
            res = pow(num1, num2);
            break;
        case '%': // modulus
            cout << "Modulo only work with integers, hence rounding down decimal numbers to integers, if any";
            if ((int)num2 != 0) {
                res = (int)num1 % (int)num2;
            } else {
                cout << "Error: Modulo by 0\n";
                valid = false;
            }
            break;
        case '/': // division
            if (num2 != 0) {
                res = num1 / num2;
            } else {
                cout << "Error: Division by 0\n";
                valid = false;
            }
            break;
        default:
            cout << "Invalid Operator!\n";
            valid = false;
            break;
        }

        if (valid) {
            cout << "Result = " << fixed << setprecision(2) << res << "\n";
        }

        cout << "Would you like to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
