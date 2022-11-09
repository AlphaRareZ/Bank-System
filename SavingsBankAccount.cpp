#include <utility>

#include "AllClasses.h"

// constructor
SavingsAccount::SavingsAccount() = default;
// setters and getters

void SavingsAccount::setID(string id) {
    this->ID = std::move(id);
}

void SavingsAccount::setBalance(long long int balance) {
    this->balance = balance;
}

long long SavingsAccount::getBalance() {
    return balance;
}

// withdraw and deposit functions
void SavingsAccount::deposit() {
    int amount;
    cout << "Account ID:" << ID << endl;
    cout << "Account Type:" << "Savings" << endl;
    cout << "Balance:" << balance << endl;
    cout << "Please Enter The Amount to Deposit =========>";
    cin >> amount;
    while (amount < 0 or amount < 100) {
        cout << "\nPlease Enter a Valid Amount Of Money.\n";
        cout << "Please Enter The Amount to Deposit =========>";
        cin >> amount;
    }
    balance += amount;
    cout << "Thank You." << endl;
    cout << "Account ID:" << ID << endl;
    cout << "New Balance:" << balance << endl;
}

void SavingsAccount::withdraw() {
    int amount;
    cout << "Account ID:" << ID << endl;
    cout << "Account Type:" << "Savings" << endl;
    cout << "Balance:" << balance << endl;
    cout << "Please Enter The Amount to Withdraw =========>";
    cin >> amount;
    while (amount > balance or balance - amount < 1000) {
        cout << "\nSorry. This is more than what you can withdraw.";
        cout << "Please Enter The Amount to Withdraw =========>";
        cin >> amount;
    }
    balance -= amount;
    cout << "Thank You." << endl;
    cout << "Account ID:" << ID << endl;
    cout << "New Balance:" << balance << endl;
}

// destructor
SavingsAccount::~SavingsAccount() = default;
