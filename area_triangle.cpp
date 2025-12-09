// copyright Maximiliano Fairman Dec 1st, 2025
// all rights reserved
// this program calculates the area of a triangle
// given the base and height provided by the user.


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Function to calculate and print the area of a triangle
void CalcArea(double base, double height) {
    // Formula: (1/2) * base * height
    double area = 0.5 * base * height;
    cout << "\nThe area of the triangle is: " << area << " cm²" << endl;
}

int main() {
    double base, height;

    cout << "=== Triangle Area Calculator (C++) ===" << endl;

    while (true) {
        cout << "Enter the base (cm): ";

        // Check if input is numeric AND positive
        if (!(cin >> base) || base <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";

            // Clear error flags and remove invalid input from buffer
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout << "Enter the height (cm): ";

        if (!(cin >> height) || height <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        // Both inputs valid, exit loop
        break;
    }

    // Call the function with valid values
    CalcArea(base, height);

    return 0;
}
