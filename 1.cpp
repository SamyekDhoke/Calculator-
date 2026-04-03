#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== CALCULATOR MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Percentage Calculation\n";
        cout << "6. Even or Odd Check\n";
        cout << "7. Largest of Two Numbers\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // 1. Addition
        if (choice == 1) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
        }

        // 2. Subtraction
        else if (choice == 2) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
        }

        // 3. Multiplication
        else if (choice == 3) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
        }

        // 4. Division
        else if (choice == 4) {
            float a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b != 0) {
                cout << "Result = " << a / b << endl;
            } else {
                cout << "Error! Division by zero is not allowed.\n";
            }
        }

        // 5. Percentage Calculation
        else if (choice == 5) {
            int subjects;
            float marks, total = 0, maxMarks;

            cout << "Enter number of subjects: ";
            cin >> subjects;

            cout << "Enter maximum marks per subject: ";
            cin >> maxMarks;

            for (int i = 1; i <= subjects; i++) {
                cout << "Enter marks for subject " << i << ": ";
                cin >> marks;
                total += marks;
            }

            float percentage = (total / (subjects * maxMarks)) * 100;

            cout << "Total Marks = " << total << endl;
            cout << "Percentage = " << percentage << "%" << endl;
        }

        // 6. Even or Odd
        else if (choice == 6) {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0) {
                cout << "Number is Even\n";
            } else {
                cout << "Number is Odd\n";
            }
        }

        // 7. Largest of Two Numbers
        else if (choice == 7) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (a > b) {
                cout << "Largest number is: " << a << endl;
            } else if (b > a) {
                cout << "Largest number is: " << b << endl;
            } else {
                cout << "Both numbers are equal\n";
            }
        }

        // 8. Exit
        else if (choice == 8) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}