#ifndef ACCOUNTINFO_ACCOUNTINFO_H
#define ACCOUNTINFO_ACCOUNTINFO_H
#include <iostream>

using namespace std;


class AccountInfo {
private:
    int acc;
    string customer;
    float balance;

public:
    explicit AccountInfo(int _acc, string _customer, float _balance);
    float getBalance();
    void print(ostream& os) const;
};

ostream& operator<<(ostream& os, const AccountInfo& o);
#endif //ACCOUNTINFO_ACCOUNTINFO_H
