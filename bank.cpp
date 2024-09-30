#include<bits/stdc++.h>
using namespace std;
class Bank {
    private:
        unsigned long long accountNumber; // 12-digit account number
        char accountHolderName[51];       // 50 characters for name + 1 for null terminator
        int accountBalance;               // Balance amount
        char accountType;                 // Account type (savings or current)

    public:
        void clearScreen();  // Function to clear the screen
        void inputAccountData();  // Function to get data from user
        void saveAccountData();   // Function to write data to file
        void depositOrWithdraw(int amount, int option);  // Function to deposit or withdraw amount
        void displayAccountDetails(unsigned long long accountNumber);  // Function to display individual records
        void displayAccountSummary() const;  // Function to display account details
        void showAccountDetails() const;  // Function to display account details
        void addDeposit(int amount);  // Function to add to deposit
        void withdrawAmount(int amount);  // Function to subtract from balance
        unsigned long long getAccountNumber() const;  // Function to return account number
        int getAccountBalance() const;  // Function to return balance amount
        char getAccountType() const;  // Function to return account type
        void modifyAccountDetails();  // Function to modify account details
};

