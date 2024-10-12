
void Bank::displayAccountSummary() const {
    cout << "Account Number: " << accountNumber << "\n"
         << "Account Holder Name: " << accountHolderName << "\n"
         << "Account Type: " << accountType << "\n"
         << "Account Balance: " << accountBalance << "\n\n";
}



void Bank::displayAccountDetails() {
    ifstream inFile("account.dat", ios::binary);
    if (!inFile) {
        cout << "No account data found!\n";
        return;
    }

    while (inFile.read(reinterpret_cast<char*>(this), sizeof(*this))) {
        displayAccountSummary();
    }
    inFile.close();
}
