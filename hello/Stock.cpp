#include "stdafx.h"
#include "Stock.h"
#include <iostream>


Stock::Stock()
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char * co, int n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if (n < 0) {
		std::cerr << "Number of shares can't be negatice; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

void Stock::buy(int num, double price) {
	if (num < 0) {
		std::cerr << "Number of shares purchased can't be negatice. "
			<< "Transaction is aborted.\n";
	} else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price) {
	if (num < 0) {
		std::cerr << "Number of sold purchased can't be negatice. "
			<< "Transaction is aborted.\n";
	} else if (num > shares) {
		std::cerr << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	} else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

void Stock::show() {
	std::cout << "Company: " << company
		<< " shares: " << shares << std::endl
		<< " Share Price: $" << share_val
		<< " Total Worth: $" << total_val << std::endl;
}



Stock::~Stock()
{
	std::cout << "Bye, " << company << "!\n";
}
