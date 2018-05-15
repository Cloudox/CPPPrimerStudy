#pragma once

#include <string>

#ifndef STOCK_H_
#define STOCK_H_


class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char * co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	void show();
	~Stock();
};

#endif // STOCK_H_
