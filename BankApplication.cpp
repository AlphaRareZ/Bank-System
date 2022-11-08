#include "classes.h"

vector<string> BankApplication::name;
vector<string> BankApplication::address;
vector<string> BankApplication::phone;
vector<string> BankApplication::type;
vector<string> BankApplication::balance;
vector<string> BankApplication::ID;

BankApplication::BankApplication() = default;

void BankApplication::addClient() {
    string cName, cAddress, cPhone, cType, cBalance;
    // Client Name Insertion
    cout << "Please Enter Client Name =========>";
    cin.ignore();
    getline(cin, cName);
    for (auto &i: name) {
        if (i == cName) {
            cout << "This Client Has Already Registered" << endl;
            return;
        }
    }
    name.push_back(cName);
    cout << endl;
    // Client Address Insertion
    cout << "Please Enter Client Address =======>";
    getline(cin, cAddress);
    address.push_back(cAddress);
    cout << endl;

    // Client Phone Insertion
    cout << "Please Enter Client Phone =======>";
    getline(cin, cPhone);
    phone.push_back(cPhone);
    cout << endl;

    // Client Account type insertion
    cout << "What Type of Account Do You Like? (1) Basic (2) Saving – Type 1 or 2 =========>";
    getline(cin, cType);
    type.emplace_back((cType == "1") ? "Basic" : "Savings");
    cout << endl;

    //Client starting balance insertion
    cout << "Please Enter the Starting Balance =========>";
    getline(cin, cBalance);
    while (stoll(cBalance) < 1000 and type.back() == "Savings") {
        cout << "\nYou Can Not Create Savings Account Under 1000 EGP. Enter >= 1000 EGP:";
        getline(cin, cBalance);
    }
    balance.push_back(cBalance);
    // ID DECLARATION
    string id = to_string(name.size());
    while (id.size() < 3)
        id = '0' + id;
    id = "FCAI-" + id;
    ID.push_back(id);
    cout << endl << "An account was created with ID " << ID.back() << " and Starting Balance " << balance.back()
         << " L.E.";
    cout << endl << "-------------------------------------------------------------------" << endl;
}

void BankApplication::listClientsAndAccounts() {
    for (int i = 0; i < name.size(); i++) {
        cout << "Name: " << name[i] << endl;
        cout << "Address: " << address[i] << endl;
        cout << "Phone: " << phone[i] << endl;
        cout << "Account Type: " << type[i] << endl;
        cout << "Balance: " << balance[i] << endl;
        cout << "---------------------------------" << endl;
    }
}

void BankApplication::withdrawMoney() {
    Client c1;
    bool found = false;
    string id;
    cout << "Please Enter Account ID (e.g., FCAI-015) =========>";
    cin >> id;
    cout << '\n';
    for (int i = 0; i < ID.size(); i++) {
        found = true;
        if (ID[i] == id) {
            c1.setID(ID[i]);
            c1.setType(type[i]);
            c1.setBalance(stoll(balance[i]));
            if (c1.getType() == "Basic")
                c1.basicWithdrawal();
            else
                c1.savingsWithdrawal();
            balance[i] = to_string(c1.getBalance());
            break;
        }
    }
    if (!found)
        cout << "USER NOT FOUND !" << endl;
}

void BankApplication::depositMoney() {
    Client c1;
    bool found = false;
    string id;
    cout << "Please Enter Account ID (e.g., FCAI-015) =========>";
    cin >> id;
    cout << '\n';
    for (int i = 0; i < ID.size(); i++) {
        found = true;
        if (ID[i] == id) {
            c1.setID(ID[i]);
            c1.setType(type[i]);
            c1.setBalance(stoll(balance[i]));
            if (c1.getType() == "Basic")
                c1.basicDeposit();
            else
                c1.savingsDeposit();
            balance[i] = to_string(c1.getBalance());
            break;
        }
    }
    if (!found)
        cout << "USER NOT FOUND !" << endl;
}
