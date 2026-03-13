#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter your weight in pounds: ";
    while (!(cin >> weight) || weight <= 0) {
        cout << "Invalid input. Enter a positive number for weight: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter your height in inches: ";
    while (!(cin >> height) || height <= 0) {
        cout << "Invalid input. Enter a positive number for height: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double bmi = (weight * 703) / (height * height);

    cout << fixed << setprecision(1);
    cout << "\nYour BMI is: " << bmi << ".\n";

    if (bmi < 18.5) {
        cout << "You are underweight.\n";
    } else if (bmi <= 25.0) {
        cout << "You have optimal weight.\n";
    } else {
        cout << "You are overweight.\n";
    }
}