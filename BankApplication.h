#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H

#include<bits/stdc++.h>

#include "Client.h"

using namespace std;

class BankApplication {
private:
    static vector<string> name;
    vector<string> address;
    vector<string> phone;
    vector<string> type;
    vector<string> balance;
public:
    BankApplication();

    static void addClient();

    static void listClientsAndAccounts();

    static void withdrawMoney();

    static void depositMoney();

};

#endif
