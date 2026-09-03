#include <iostream>

using namespace std;

int main() {
    int month;

    // Take month input from the user
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Validate month input
    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a number between 1 and 12." << endl;
        return 0;
    }

    // Determine days using switch statement
    switch (month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days." << endl;
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days." << endl;
            break;

        // February: Check for Leap Year
        case 2: {
            int year;
            cout << "Enter the year: ";
            cin >> year;

            // Leap year condition:
            // Divisible by 4 AND (not divisible by 100 OR divisible by 400)
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "February " << year << " has 29 days (Leap Year)." << endl;
            } else {
                cout << "February " << year << " has 28 days." << endl;
            }
            break;
        }
    }

    return 0;
}
