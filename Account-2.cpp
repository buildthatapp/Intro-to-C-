#include "Account.h"
#include "Customer.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include "Bank.h"

using namespace std;



Account::Account() {
	accountNum = rand() % 100;
	balance = 0.00;
}
Account::Account(int a, float b) {
	
		accountNum = a;
		balance = b;
}
Account::Account(int a, float b, string cName, string cAddress) {
	accountNum = a;
	balance = b;
	c.setName(cName);
	c.setAddress(cAddress);
	
}

bool Account::withdraw(int accountNum, float amount) {
	return true;
}
bool Account::deposit(int accountNum, float amount) {
	return true;
}
void Account::setaccountNum(int a) {
	accountNum = a;
}
void Account::setbalance(float b) {
	balance = b;
}
/*void Account::setC(string name, string address) {
	
}*/

int Account::getaccountNum() {
	return accountNum;
}
float Account::getbalance() {
	return balance;
}
/*Customer Account::getC() {

}*/

/*int RandomIDNum() {
	// Seed the random-number generator with the current time
	// so that the numbers will be different every time we run
	srand((unsigned)time(NULL));

	// Get a random integer
	int randNum = rand();

	// Get an integer between 1 to 999
	randNum = randNum % 998 + 1;



	return randNum;
}*/


void   Account::displayAccount() {
	cout << "Account Num: " << getaccountNum() << endl;
	cout << "Account Balance: " << getbalance() << endl;
	cout << "Customer:" << endl;
	cout << "Name: " << c.getName() << "		address: " << c.getAddress() << endl;
	cout << endl;
	
}