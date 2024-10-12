bool Bank::checkPassword(const string& password) {
    return password == bankPassword; // Check if the provided password matches
}

void Bank::displayTotalBankCapital() {
    string inputPassword;
    cout << "Enter the bank password: ";
    cin >> inputPassword;

    if (checkPassword(inputPassword)) {
        cout << "Total Bank Capital: " << totalBankCapital << "\n";
    } else {
        cout << "Incorrect password!\n";
    }
}
