

vector<string> Client::name;
vector<string> Client::address;
vector<string> Client::phone;
vector<string> Client::type;
vector<string> Client::balance;

void Client::addClient() {
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
    Client::name.push_back(cName);
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
    type.emplace_back((cType=="1")? "Basic":"Savings");
    cout << endl;

    //Client starting balance insertion
    cout << "Please Enter the Starting Balance =========>";
    getline(cin, cBalance);
    while(stoll(cBalance)<1000 and type.back()=="Savings")
    {
        cout<<"\nYou Can Not Create Savings Account Under 1000 EGP. Enter >= 1000 EGP:";
        getline(cin, cBalance);
    }
    balance.push_back(cBalance);
    cout << endl << "-------------------------------------------------------------------" << endl;
}

vector<string> Client::getNameVector() {
    return name;
}

vector<string> Client::getAddressVector() {
    return address;
}

vector<string> Client::getPhoneVector() {
    return phone;
}

vector<string> Client::getTypeVector() {
    return type;
}

vector<string> Client::getBalanceVector() {
    return balance;
}
