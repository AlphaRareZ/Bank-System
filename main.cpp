#include <bits/stdc++.h>
using namespace std;
#include "BankApplication.h"
#include "BankApplication.cpp"
int main() {
    while(true){
        cout << "Welcome to FCAI Banking Application \n"
                "1. Create a New Account \n"
                "2. List Clients and Accounts \n"
                "3. Withdraw Money \n"
                "4. Deposit Money \n\n"
                "Please Enter Choice =========>";
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout<<endl;
            BankApplication troll;
            troll.addClient();
        }
        if (choice == 2) {
            BankApplication::listClientsAndAccounts();
        }
    }

}
