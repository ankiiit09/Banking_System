#include <bits/stdc++.h>
using namespace std;
int main() {
    while (1) {
        int choice;  // Variable to store the choice of the user
        cout << "===========================\n";
        cout << "Hello! Welcome to Lena Dena Bank\n";
        cout << "1. Create a new account\n";
        cout << "2. Modify an existing account\n";
        cout << "3. Display an account\n";
        cout << "4. Deposit money\n";
        cout << "5. Withdraw money\n";
        cout << "6. Display all accounts\n";
        cout << "7. Delete an account\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                // Create a new account
                cout << "\nCreating a new account...\n";
                break;
            case 2:
                // Modify an existing account
                cout << "\nModifying an account...\n";
                break;
            case 3:
                // Display an account
                cout << "\nDisplaying an account...\n";
                break;
            case 4:
                // Deposit money
                cout << "\nDepositing money...\n";
                break;
            case 5:
                // Withdraw money
                cout << "\nWithdrawing money...\n";
                break;
            case 6:
                // Display all accounts
                cout << "\nDisplaying all accounts...\n";
                break;
            case 7:
                // Delete an account
                cout << "\nDeleting an account...\n";
                break;
            case 8:
                // Exit
                cout << "\nExiting the system...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
        if (choice == 8) {
            break;  
        }
        cout << "\n";
    }
    return 0;
}
