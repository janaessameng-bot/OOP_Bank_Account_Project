#include "BankAccount.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
   BankAccount account1;
   int Accountnumber;
   string holdername;
   double balance;

   cout<<"set account number: (only integer number is allowed): ";
   cin>>Accountnumber;
   account1.setaccountnumber(Accountnumber);
   cout<<"set holder name: ";
   getline(cin>>ws,holdername);
   account1.setholdername(holdername);
   string response1;
   cout<<"Do you have balance or not(respond with yes or no):";
   cin>>response1;
   if (response1=="yes") {
      cout<<"Please enter the balance: "<<endl;
      cin>>balance;
      account1.setbalance(balance);
   }
   else {
      balance=0;
   }
   cout<<"Your account information is: "<<endl;
   cout<<"Ur account number is : "<<account1.getaccountnumber()<<endl;
   cout<<"Ur holder name is : "<<account1.getholdername()<<endl;
   cout<<"Ur balance is : "<<account1.getbalance()<<endl;
   string response2;
   cout<<"Do U want to deposit or withdraw money: (respond with deposit or withdraw): ";
   cin>>response2;
   long long money;
   if (response2 =="deposit") {

      cout<<"How much you want to deposit: "<<endl;
      cin>>money;
      account1.depositemoney(money);
      cout<<"succeed "<<endl;

   }
   else {
      cout<<"How much you want to withdraw: "<<endl;
      cin>>money;
      if (money<=balance) {
         account1.withdrawmoney(money);
         cout<<"succeed"<<endl;
      }
      else {
         cout<<"Sorry money is not enough";
      }
   }
   cout<<"do you want to do anything else respond with (yes or no):";
   string response3;
   cin>>response3;
   while (response3=="yes") {
      string response4;
      cout<<"do you want to deposit or withdraw money:";
      cin>>response4;
      if (response4=="deposit") {

         cout<<"How much you want to deposit: "<<endl;
         cin>>money;
         account1.depositemoney(money);
         cout<<"succeed "<<endl;

      }
      else {
         cout<<"How much you want to withdraw: "<<endl;
         cin>>money;
         if (money<=balance) {
            account1.withdrawmoney(money);
            cout<<"succeed"<<endl;
         }
         else {
            cout<<"sorry ur money is not enough";
         }

      }
      cout<<"do you want to do anything else respond with (yes or no):";

      cin>>response3;
   }




      cout<<"Your account information is: "<<endl;
      cout<<"Ur account number is : "<<account1.getaccountnumber()<<endl;
      cout<<"Ur holder name is : "<<account1.getholdername()<<endl;
      cout<<"Ur balance is : "<<account1.getbalance()<<endl;





   }



























