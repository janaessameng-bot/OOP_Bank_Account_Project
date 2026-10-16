//
// Created by pc on 10/14/2026.
//

#ifndef UNTITLED1_BANKACCOUNT_H
#define UNTITLED1_BANKACCOUNT_H
#include<string>
using namespace std;

class BankAccount {
private:
    int Accountnumber=0;
    string holdername;
    double balance=0;
public:
    void setaccountnumber(int num);
    void setholdername(string name);
    void setbalance(double balance);
    int getaccountnumber();
    string getholdername();
    double getbalance();
    void depositemoney(double money);
    void withdrawmoney(double money);


};


#endif //UNTITLED1_BANKACCOUNT_H
