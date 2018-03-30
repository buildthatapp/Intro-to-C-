#pragma once
#include "Account.h"
#include <string>
#include <iostream>

using namespace std;

//class Checking is a child of class Account
class Checking : public Account
{
private:
	float chargePerCheck; //private data member for the price per check
	int numCheck; // private data member for storing a check number
	float minBalance; // private data member for storing an account's minimum balance
public:
	Checking(); //default constructor
	void setchargePerCheck(float c); // set a charge per check, accepts a float param
	void setnumCheck(int c);// set a check number, accepts an int param
	void setminBalance(float b);// set the accounts minimum balance, accepts a float param
	float getchargePerCheck();//gets the account's charge per check
	int getnumCheck();//gets the accounts check number
	float getminBalance();//gets the accounts minimum balance
	float getBalance();// gets the account balance
	void displayAccount();// displays account data
};