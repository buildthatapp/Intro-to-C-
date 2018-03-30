#ifndef  ACCOUNT_H_
#define  ACCOUNT_H_

#include <string>
#include <iostream>
#include "Customer.h"
#include <vector>




using namespace std;

class Account 
{
	Customer c;

private:
	int accountNum;
	float balance;
	

public:
	//constructors
	Account();
	Account(int acctNum, float b);
	Account(int acctNum, float b, string custName, string custAddress);

	//member functions
	bool withdraw(int accountNum, float amount);
	bool deposit(int accountNum, float amount);
	//int RandomIDNum();

	//set and get methods
	void setaccountNum(int a);
	void setbalance(float b);
	void setC(string name, string address);

	int getaccountNum();
	float getbalance();
	Customer getC();

	//display
	void   displayAccount();

};

#endif 

