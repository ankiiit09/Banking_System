

void Bank::depositOrWithdraw(int Amount, int option)
{
    if (option == 1)
    {
        addDeposit(Amount);
    }
    else if(option == 2)
    {
        withdrawAmount(Amount);
    }
    else{
        cout << "Invalid option. Please choose 1 for deposit or 2 for withdrawal.";
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
