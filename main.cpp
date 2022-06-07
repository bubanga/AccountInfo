#include <iostream>
#include "AccountInfo.h"


using namespace std;

int main() {
    srand(time(nullptr));
    int n = 5;
    string name_exception = "negative_balance_exception";

    AccountInfo **accountInfo = new AccountInfo*[n];
    std::cout << "ACCNO  CUSTOMER  BALANCE" << std::endl;
    for (int i = 0; i < n; ++i) {
        float bal = -1000 + (rand() % 2001);
        accountInfo[i] = new AccountInfo(1000+i, "OWNER " + to_string(i), bal);
        cout << *accountInfo[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < n; ++i) {
        try {
            if ((accountInfo[i]->getBalance()) < 0)
                throw out_of_range(name_exception);
        } catch (out_of_range &e) {
            if (e.what() == name_exception)
                cout << "Negative Balance: " << accountInfo[i]->getBalance() << endl;
        }

        delete accountInfo[i];
    }

    delete[] accountInfo;

    return 0;
}
