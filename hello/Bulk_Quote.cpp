#include "stdafx.h"
#include "Bulk_Quote.h"


Bulk_Quote::Bulk_Quote() {
}


double Bulk_Quote::net_price(std::size_t cnt) const {
	if (cnt >= quantity)
		return cnt * discount * price;
	else
		return cnt * price;
}

