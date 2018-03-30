#ifndef  BANK_H
#define  BANK_H

#include <string>
#include <iostream>
#include "Customer.h"
#include "Account.h"
#include <vector>


using namespace std;

class Bank
{
private:
	string name;
	int routingNum;
	int numberOfAccounts = 0;
	vector<Account> accounts;

public:
	//constructors
	Bank();
	Bank(string n, int routingNum);

	//member functions
	int createAccount(string n, string address, float balance);
	bool deleteAccount(int account);
	

	//set and get methods
	string getName();
	void   setName(string n);
	int getroutingnum();
	void   setroutingnum(int num);
	int getNumberOfAccounts();

	//display
	void   DisplayBank();

};

#endif 

