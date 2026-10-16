//
// Created by pc on 10/14/2026.
//

#include "BankAccount.h"
#include<string>
using namespace std;
#include<iostream>

void BankAccount::setaccountnumber(int num) {
    Accountnumber=num;
}
void BankAccount:: setholdername(string name) {
    holdername=name;
}
void BankAccount:: setbalance(double bal) {
    balance =bal;
}

void BankAccount::depositemoney(double money) {
    balance+=money;
}
void BankAccount::withdrawmoney(double money) {
    if (money<=balance) {
        balance-=money;
    }
    else {
        cout<<"sorry ur money is not enough"<<endl;
    }

}
int  BankAccount:: getaccountnumber() {
    return Accountnumber;
}
string BankAccount::getholdername() {
    return holdername;
}
double BankAccount:: getbalance() {
    return balance;
}
