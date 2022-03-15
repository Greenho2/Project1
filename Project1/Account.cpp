#include "Account.h"


bool Account::withdraw(long unsigned int amount) {

	if (amount > value)
		return false;

	value = value - amount;
	return true;


}


long unsigned int Account::deposit(long unsigned int amount) {
	value = value + amount;

	return value;

}