#pragma once
#include "Account.h"
#include <string>
#include <iostream>

using namespace std;

//class Savings is a child class of class Account
class Savings : public Account
{
private:
	float interestRate; //a private data member for storing the interest rate on a savings account
public:
	Savings(); // default constructor
	float accrueInterest(); //finds the interest gained on a savings account
	void setinterestRate(float i); //  set an interest rate on the account, accepts a float param
	float getinterestRate(); //get the interest rate from an account
	float getBalance(); // get the balance of an account. 
	void displayAccount();// displays the account data

};
