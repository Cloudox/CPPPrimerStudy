#pragma once
#include "Disc_quote.h"
class Limit_Bulk_Quote :
	public Disc_quote {
public:
	Limit_Bulk_Quote();
	//Limit_Bulk_Quote(const std::string &book, double p, std::size_t qty, double disc) :Disc_quote(book, p, qty, disc) {};
	using Disc_quote::Disc_quote;
	double net_price(std::size_t n) const override;
};

