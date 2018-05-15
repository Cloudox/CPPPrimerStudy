#pragma once
#include <string>
#include <ostream>
class Person {
public:
	Person();
	Person(const std::string &n, const std::string &a) : pName(n), pAdress(a) {};
	~Person();
	std::string pName;
	std::string pAdress;
	std::string getName() { return pName; }
	std::string getAdress() { return pAdress; }
	std::istream &read(std::istream &is);
	std::ostream &print(std::ostream &os);
};

