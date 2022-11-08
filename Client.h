#ifndef CLIENT_H
#define CLIENT_H
#define endl '\n'
#include <bits/stdc++.h>
#include "BankApplication.h"
using namespace std;
class Client {
private:
    string ID;
    long long balance;
    string type;

//    SavingsAccount *pSavingsAccount;

public:
    Client();
    void withdrawMoney();
    void setType(string &type);
    void setID(string &id);
    void setBalance(long long balance);
    string getType();
    string getID();
    long long getBalance() const;

};

#endif