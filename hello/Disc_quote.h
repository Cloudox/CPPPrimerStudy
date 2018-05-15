#pragma once
#include "Quote.h"
class Disc_quote :
	public Quote {
public:
	Disc_quote();
	Disc_quote(const std::string &book, double price, std::size_t qty, double disc) :Quote(book, price), quantity(qty), discount(disc) {};
	double net_price(std::size_t n) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};
