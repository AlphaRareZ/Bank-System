#ifndef CLIENT_H
#define CLIENT_H
#define endl '\n'

#include <bits/stdc++.h>

using namespace std;

class Client {
private:
    static vector<string> name;
    static vector<string> address;
    static vector<string> phone;
    static vector<string> type;
    static vector<string> balance;
//    BankAccount* pBankAccount;
public:

    static void addClient();

    static vector<string> getNameVector();
    static vector<string> getAddressVector();
    static vector<string> getPhoneVector();
    static vector<string> getTypeVector();
    static vector<string> getBalanceVector();
};

#endif