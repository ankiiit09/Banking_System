#include<bits/stdc++.h>
#include "bank.h"
using namespace std;
void Bank::clearScreen() {
    system("cls");
}
void Bank::inputAccountData() {
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
void Bank::saveAccountData() {
    ofstream outFile;
    outFile.open("account.dat", ios::binary | ios::app);
    inputAccountData();
    outFile.write((char * ) this, sizeof( * this));
    outFile.close();
}

