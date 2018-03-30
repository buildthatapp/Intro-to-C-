#include "Bank.h"
#include "Customer.h"
#include "Account.h"



Bank::Bank() {
	name = "";
	routingNum;

}
Bank::Bank(string n, int routingnum) {
	name = n;
	routingNum = routingnum;
}
string Bank::getName() {
	return name;
}
void   Bank::setName(string n) {
	name = n;
}
int Bank::getroutingnum() {
	return routingNum;
}
void   Bank::setroutingnum(int num) {
	routingNum = num;
}
int Bank::getNumberOfAccounts() {
	return numberOfAccounts;
}

int Bank::createAccount(string customername, string customeraddress, float customerbalance) {
	numberOfAccounts++;
	accounts.push_back(Account(rand() % 100, customerbalance, customername, customeraddress));
	
	
	return numberOfAccounts;
	
}
bool Bank::deleteAccount(int account) {
	return true;
}


void Bank::DisplayBank() {
	cout << "Bank Name:                    " << name << endl;
	cout << "Routing Number:               " << routingNum << endl;
	cout << "Number of accounts:           " << numberOfAccounts << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < numberOfAccounts; i++)
	{
		accounts[i].displayAccount();

	}
}


