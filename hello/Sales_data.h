#pragma once
#include <string>
#include <iostream>


class Sales_data {
	friend std::ostream &operator<<(std::ostream &, const Sales_data &);
	friend std::istream &operator>>(std::istream &is, Sales_data &item);
	friend bool operator==(const Sales_data &lhs, const Sales_data &rhs);
	friend bool operator!=(const Sales_data &lhs, const Sales_data &rhs);
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(const std::string &s, int n, double m) :bookNo(s), salesCount(n), money(m) { }
	Sales_data(std::istream &);
	~Sales_data();
	std::string bookNo;
	int salesCount = 0;
	double money = 0.0;
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);
	std::istream &read(std::istream &is);
	std::ostream &print(std::ostream &os);
	Sales_data add(const Sales_data &item);
	Sales_data & operator+=(const Sales_data &rhs);
	Sales_data &operator=(std::string s);
	operator std::string() const { return isbn(); };
	
};


