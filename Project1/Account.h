#pragma once
#include <cstdint>
#include <iostream>
using namespace std;


class Account {
public:
		string address;

		long unsigned int value;

		bool withdraw(long unsigned int amount);

		long unsigned int deposit(long unsigned int amount);

		Account(string addy) { address = addy; value = 0; }

private:
	


};