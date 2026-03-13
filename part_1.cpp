#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;
    bool valid;

    // month 1
    do {
        cout << "Enter month #1: ";
        cin >> month1;

        valid = (month1 == "January" || month1 == "February" || month1 == "March" ||
                 month1 == "April" || month1 == "May" || month1 == "June" ||
                 month1 == "July" || month1 == "August" || month1 == "September" ||
                 month1 == "October" || month1 == "November" || month1 == "December");

        if (!valid) {
            cout << "Invalid month. Try again.\n";
        }
    } while (!valid);

    cout << "Enter rainfall for " << month1 << " (in inches): ";
    while (!(cin >> rain1)) {
        cout << "Invalid input. Enter a number for " << month1 << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // month 2
     do {
        cout << "Enter month #2: ";
        cin >> month2;

        valid = (month2 == "January" || month2 == "February" || month2 == "March" ||
                 month2 == "April" || month2 == "May" || month2 == "June" ||
                 month2 == "July" || month2== "August" || month2 == "September" ||
                 month2 == "October" || month2 == "November" || month2 == "December");

        if (!valid) {
            cout << "Invalid month. Try again.\n";
        }
    } while (!valid);

    cout << "Enter rainfall for " << month2 << " (in inches): ";
    while (!(cin >> rain2)) {
        cout << "Invalid input. Enter a number for " << month2 << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // month 3
     do {
        cout << "Enter month #3: ";
        cin >> month3;

        valid = (month3 == "January" || month3 == "February" || month3 == "March" ||
                 month3 == "April" || month3 == "May" || month3 == "June" ||
                 month3 == "July" || month3== "August" || month3 == "September" ||
                 month3 == "October" || month3 == "November" || month3 == "December");

        if (!valid) {
            cout << "Invalid month. Try again.\n";
        }
    } while (!valid);

    cout << "Enter rainfall for " << month3 << " (in inches): ";
    while (!(cin >> rain3)) {
        cout << "Invalid input. Enter a number for " << month3 << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "\nThe average monthly rainfall for "
         << month1 << ", " << month2 << ", and " << month3
         << " was " << average << " inches.\n";

    return 0;
}

