#include <iostream>
using namespace std;

// Function declarations
void displayMenu();
void getNumbers(double &num1, double &num2);
void runCalculator();

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
int modulo(int a, int b);

// Main arithmetic functions
double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

// Display menu
void displayMenu() {
    cout << "\n===== Arithmetic Menu =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

// Get user input
void getNumbers(double &num1, double &num2) {
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

// Run calculator
void runCalculator() {
    int choice;
    double num1, num2;

    do {
        displayMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            getNumbers(num1, num2);
        }

        switch (choice) {
            case 1:
                cout << num1 << " + " << num2 << " = "
                     << addition(num1, num2) << endl;
                break;

            case 2:
                cout << num1 << " - " << num2 << " = "
                     << subtraction(num1, num2) << endl;
                break;

            case 3:
                cout << num1 << " * " << num2 << " = "
                     << multiplication(num1, num2) << endl;
                break;

            case 4:
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = "
                         << division(num1, num2) << endl;
                } else {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                break;

            case 5:
                if (static_cast<int>(num2) != 0) {
                    cout << static_cast<int>(num1) << " % "
                         << static_cast<int>(num2) << " = "
                         << modulo(static_cast<int>(num1),
                                   static_cast<int>(num2)) << endl;
                } else {
                    cout << "Error: Cannot use modulo by zero." << endl;
                }
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 6);
}

// Main function
int main() {
    runCalculator();

    return 0;
}