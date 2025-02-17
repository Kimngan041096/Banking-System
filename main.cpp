#include <iostream>
using namespace std;

int main() {
    double balance = 0.0; // Initial balance
    int option;
    double amount;

    // Loop to keep the system running until the user exits
    while (true) {
        // Display the menu
        cout << "\n======== BANKING SYSTEM ========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "================================\n";
        cout << "Choose an option: ";
        cin >> option;

        // Handle user choices with a switch statement
        switch (option) {
            case 1: // Deposit money
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount. Deposit must be positive.\n";
                }
                break;

            case 2: // Withdraw money
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount. Withdrawal must be positive.\n";
                } else {
                    cout << "Insufficient funds! Withdrawal failed.\n";
                }
                break;

            case 3: // Check balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: // Exit the program
                cout << "Exiting the banking system. Thank you for using our service!\n";
                return 0;

            default: // Invalid option
                cout << "Invalid option! Please choose a valid menu option.\n";
        }
    }

    return 0;
}


