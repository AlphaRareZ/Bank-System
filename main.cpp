#include <bits/stdc++.h>
#include "classes.h"
#include "BankApplication.cpp"
#include "BankAccount.cpp"
#include "Client.cpp"
#include "SavingsBankAccount.cpp"

using namespace std;

int main() {
    while (true) {
        BankApplication::updateVectors();
        cout << "Welcome to FCAI Banking Application \n"
                "1. Create a New Account \n"
                "2. List Clients and Accounts \n"
                "3. Withdraw Money \n"
                "4. Deposit Money \n\n"
                "Please Enter Choice =========>";
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout << endl;
            BankApplication::addClient();
        }
        if (choice == 2) {
            cout<<endl;
            BankApplication::listClientsAndAccounts();
        }
        if (choice == 3) {
            cout<<endl;
            BankApplication::withdrawMoney();
        }
        if (choice == 4) {
            cout<<endl;
            BankApplication::depositMoney();
        }
        BankApplication::updateDatabase();
    }
}
