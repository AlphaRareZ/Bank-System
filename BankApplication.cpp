#include "BankApplication.h"
#include "Client.cpp"
BankApplication::BankApplication() = default;

void BankApplication::addClient() {
    Client::addClient();
}

void BankApplication::listClientsAndAccounts() {
    vector<string> names ,address,phone,type,balance;
    names = Client::getNameVector();
    address = Client::getAddressVector();
    phone= Client::getPhoneVector();
    type = Client::getTypeVector();
    balance= Client::getBalanceVector();
    for(int i = 0;i<names.size();i++){
        cout<<"Name: "<<names[i]<<endl;
        cout<<"Address: "<<address[i]<<endl;
        cout<<"Phone: "<<phone[i]<<endl;
        cout<<"Account Type: "<<type[i]<<endl;
        cout<<"Balance: "<<balance[i]<<endl;
        cout<<"---------------------------------"<<endl;
    }
}
