#include "AccountInfo.h"

AccountInfo::AccountInfo(int _acc, string _customer, float _balance) {
    this->acc = _acc;
    this->customer = _customer;
    this->balance = _balance;
}

float AccountInfo::getBalance() {
    return this->balance;
}

void AccountInfo::print(ostream& os) const {
    os << " " << this->acc << " ";
    os << " " << this->customer << " ";
    os << "  " << this->balance;
}

ostream& operator<<(ostream& os, const AccountInfo& o) {
    o.print(os);
    return os;
}