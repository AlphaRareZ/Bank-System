#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H

#include<bits/stdc++.h>
#include "Client.h"
#include "BankAccount.h"
#include "SavingsBankAccount.h"
using namespace std;
class BankAccount;
class SavingsAccount;
class Client;
class BankApplication {
private:
    static vector<string> name;
    static vector<string> address;
    static vector<string> phone;
    static vector<string> type;
    static vector<string> balance;
    static vector<string> ID;
public:
    BankApplication();

    static void addClient();

    static void listClientsAndAccounts();

    static void withdrawMoney();

    static void depositMoney();

};

#endif
