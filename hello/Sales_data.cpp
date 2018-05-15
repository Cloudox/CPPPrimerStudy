#include "stdafx.h"
#include "Sales_data.h"



Sales_data::Sales_data(std::istream &is) {
	double price = 0;
	is >> this->bookNo >> this->salesCount >> price;
	this->money = this->salesCount * price;
}

Sales_data::~Sales_data() {
}

Sales_data & Sales_data::combine(const Sales_data &rhs) {
	salesCount += rhs.salesCount;
	money += rhs.money;
	return *this;
}

std::istream & Sales_data::read(std::istream & is) {
	double price = 0;
	
	is >> this->bookNo >> this->salesCount >> price;
	this->money = this->salesCount * price;
	return is;
}

std::ostream & Sales_data::print(std::ostream & os) {
	os << this->isbn() << " " << this->salesCount << " " << this->money;
	return os;
}

Sales_data Sales_data::add(const Sales_data & item) {
	return this->combine(item);
}

Sales_data & Sales_data::operator+=(const Sales_data & rhs) {
	salesCount += rhs.salesCount;
	money += rhs.money;
	return *this;
}

Sales_data & Sales_data::operator=(std::string s) {
	bookNo = s;
	return *this;
}



std::ostream &operator<<(std::ostream &os, const Sales_data &item) {
	os << item.bookNo << " " << item.salesCount << " " << item.money;
	return os;
}
std::istream & operator>>(std::istream & is, Sales_data & item) {
	double price;
	is >> item.bookNo >> item.salesCount >> price;
	if (is)
		item.money = item.salesCount * price;
	else
		item = Sales_data();
	return is;
}
bool operator==(const Sales_data & lhs, const Sales_data & rhs) {
	return lhs.isbn() == rhs.isbn() &&
		lhs.salesCount == rhs.salesCount &&
		lhs.money == rhs.money;
}
bool operator!=(const Sales_data & lhs, const Sales_data & rhs) {
	return !(lhs == rhs);
}
Sales_data operator+(const Sales_data & lhs, const Sales_data & rhs) {
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}
;