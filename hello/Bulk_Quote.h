#pragma once
#include "Disc_quote.h"
class Bulk_Quote :
	public Disc_quote {
public:
	Bulk_Quote();
	//Bulk_Quote(const std::string &book, double p, std::size_t qty, double disc) :Disc_quote(book, p, qty, disc) {};
	using Disc_quote::Disc_quote;
	double net_price(std::size_t n)const override;

};

