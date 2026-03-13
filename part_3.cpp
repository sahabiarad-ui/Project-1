#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    int daysWorked;

    cout << "Enter the number of days worked (1-31): ";
    while (!(cin >> daysWorked) || daysWorked < 1 || daysWorked >31) {
        cout << "Invalid input. Enter a value between 1 to 31: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long long dailyPennies = 1;
    long long totalPennies = 0;

    cout << fixed << setprecision(2);
    cout << "\nDay\tSalary\n";
    cout << "------------------------\n";

    for (int day = 1; day <= daysWorked; ++day) {
        double dailyDollars = dailyPennies / 100.0;

        cout << day << "\t$" << dailyDollars << "\n";

        totalPennies += dailyPennies;
        dailyPennies *= 2;
    }

    cout << "------------------------\n";
    cout << "Total pay: $" << (totalPennies / 100.0) << "\n";

    return 0;
}