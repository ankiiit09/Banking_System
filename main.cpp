#include <bits/stdc++.h>

using namespace std;

class Bank
{
private:
    unsigned long long accountNumber; // 12-digit account number
    char accountHolderName[51];       // 50 characters for name + 1 for null terminator
    int accountBalance;               // Balance amount
    char accountType;                 // Account type (savings or current)

public:
    void clearScreen();                                           // Function to clear the screen
    void inputAccountData();                                      // Function to get data from user
    void saveAccountData();                                       // Function to write data to file
    void depositOrWithdraw(int amount, int option);               // Function to deposit or withdraw amount
    void displayAccountDetails(unsigned long long accountNumber); // Function to display individual records
    void displayAccountSummary() const;                           // Function to display account details
    void showAccountDetails() const;                              // Function to display account details
    void addDeposit(int amount);                                  // Function to add to deposit
    void withdrawAmount(int amount);                              // Function to subtract from balance
    unsigned long long getAccountNumber() const;                  // Function to return account number
    int getAccountBalance() const;                                // Function to return balance amount
    char getAccountType() const;                                  // Function to return account type
    void modifyAccountDetails();                                  // Function to modify account details
};

void Bank::clearScreen()
{
    system("cls");
}
void Bank::inputAccountData()
{
    cout << "\n\n===========CREATE BANK ACCOUNT===========\n\n";
    cout << "\nEnter the Account Number:";
    cin >> accountNumber;
    while ((int)to_string(accountNumber).size() != 12)
    {
        cout << "The account number has to be of 12 digits. Please try again.\n";
        cin.clear();
        fflush(stdin);
        cin >> accountNumber;
    }
    cout << "\n\nEnter Account Holder Name: ";
    cin.clear();
    fflush(stdin);
    cin.getline(accountHolderName, 51);
    cout << "\nWhich type of Account \n[S for Saving Account] (or)[C for Current Account]: ";
    cin.clear();
    fflush(stdin);
    cin >> accountType;
    cout << "\n\nEnter Initial Deposit Amount: ";
    cin >> accountBalance;
    cout << "\n\nAccount Created Successfully!";
}
void Bank::saveAccountData()
{
    ofstream outFile;
    outFile.open("account.dat", ios::binary | ios::app);
    inputAccountData();
    outFile.write((char *)this, sizeof(*this));
    outFile.close();
}

void Bank::depositOrWithdraw(int Amount, int option)
{
    if (option == 1)
    {
        addDeposit(Amount);
    }
    else
    {
        withdrawAmount(Amount);
    }
}

void Bank::addDeposit(int amount)
{
    if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a positive amount." << endl;
        return;
    }
    accountBalance += amount;
    cout << "Successfully credited amount:" << amount << endl;
    cout << "Current Balance:" << accountBalance << endl;
}

void Bank::withdrawAmount(int amount)
{
    if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a positive amount." << endl;
        return;
    }
    accountBalance -= amount;
    cout << "Successfully withdraw amount:" << amount << endl;
    cout << "Current Balance:" << accountBalance << endl;
}

int main()
{
    while (1)
    {
        int choice; // Variable to store the choice of the user
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
        switch (choice)
        {
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
        if (choice == 8)
        {
            break;
        }
        cout << "\n";
    }
    return 0;
}
