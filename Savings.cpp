#include "Savings.h"
#include <string>
#include <iostream>

using namespace std;

//returns balance times interest rate
float Savings::accrueInterest() {
	return (getbalance()*interestRate);
}
//default constructor, sets default values
Savings::Savings() {
	setaccountNum(rand() % 100);
	setbalance(0.00);
	interestRate = .01;
}
//sets account interest rate equal to the float parameter passed
void Savings::setinterestRate(float i) {
	interestRate = i;
}
//returns the account's interest rate
float Savings::getinterestRate() {
	return interestRate;
}
//returns the account's balance. balance is a private data member of class Account, so we use getBalance() to get balance
float Savings::getBalance() {
	return getbalance();
}
//displays account data
void Savings::displayAccount() {
	
}