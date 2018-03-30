#include "Checking.h"
#include <iostream>
#include <string>

using namespace std;

Checking::Checking() {
	setaccountNum(rand() % 100);
	setbalance(0.00);
	chargePerCheck = 1.00;
	numCheck++;
	minBalance = 0;
}
void Checking::setchargePerCheck(float c) {
	chargePerCheck = c;
}
void Checking::setnumCheck(int c) {
	numCheck = c;
}
void Checking::setminBalance(float b) {
	minBalance = b;
}
float Checking::getchargePerCheck() {
	return chargePerCheck;
}
int Checking::getnumCheck() {
	return numCheck;
}
float Checking::getminBalance() {
	return minBalance;
}
float Checking::getBalance()
{
	return getbalance();
}
void Checking::displayAccount() {

}