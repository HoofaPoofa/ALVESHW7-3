#include "bankAccount.h"
#include <iostream>
#include <string>
using namespace std;

bankAccount::bankAccount(string n, float bal){
	customerName = n;
	balance = bal;
}
void bankAccount::setName(string n){
	n = customerName;
}

void bankAccount::setBalance(float bal){
	bal = balance;
}

string bankAccount::getName(){
	return customerName;
}

float bankAccount::getBalance(){
	return balance;
}

void bankAccount::deposit(float dep){
	balance = balance + dep;
	cout << "Deposit =" << dep << endl;
}

void bankAccount::withdraw(float draw){
	balance = balance - draw;
	cout << "Withdrawal =" << draw << endl;
}

