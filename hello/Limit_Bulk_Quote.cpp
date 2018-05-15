#include "stdafx.h"
#include "Limit_Bulk_Quote.h"


Limit_Bulk_Quote::Limit_Bulk_Quote() {
}

double Limit_Bulk_Quote::net_price(std::size_t n) const {
	if (n <= quantity)
		return price * discount * n;
	else
		return price * discount * quantity + (n - quantity) * price;
}

