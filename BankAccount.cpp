#include <utility>
#include "AllClasses.h"

// constructor
BankAccount::BankAccount() {
    pClient = new Client;
    this->balance = 0;
    this->ID = "";
}

// setters and getters
void BankAccount::setID(string id) {
    this->ID = std::move(id);
}

void BankAccount::setBalance(long long int bankBalance) {
    this->balance = (bankBalance);
}

long long BankAccount::getBalance() const {
    return balance;
}

// withdraw and deposit functions
void BankAccount::withdraw() {
    int amount;
    cout << "Account ID:" << ID << endl;
    cout << "Account Type:" << "Basic" << endl;
    cout << "Balance:" << balance << endl;
    cout << "Please Enter The Amount to Withdraw =========>";
    cin >> amount;
    while (amount > balance) {
        cout << "\nSorry. This is more than what you can withdraw.";
        cout << "Please Enter The Amount to Withdraw =========>";
        cin >> amount;
    }
    balance -= amount;
    cout << "Thank You." << endl;
    cout << "Account ID:" << ID << endl;
    cout << "New Balance:" << balance << endl;
}

void BankAccount::deposit() {
    int amount;
    cout << "Account ID:" << ID << endl;
    cout << "Account Type:" << "Basic" << endl;
    cout << "Balance:" << balance << endl;
    cout << "Please Enter The Amount to Deposit =========>";
    cin >> amount;
    while (amount < 0) {
        cout << "\nPlease Enter a Positive Amount Of Money.\n";
        cout << "Please Enter The Amount to Deposit =========>";
        cin >> amount;
    }
    balance += amount;
    cout << "Thank You." << endl;
    cout << "Account ID:" << ID << endl;
    cout << "New Balance:" << balance << endl;
}

// destructor
BankAccount::~BankAccount() = default;
