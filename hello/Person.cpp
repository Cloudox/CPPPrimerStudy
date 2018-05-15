#include "stdafx.h"
#include "Person.h"


Person::Person() {
}


Person::~Person() {
}

std::istream & Person::read(std::istream & is) {
	is >> this->pName >> this->pAdress;
	return is;
}

std::ostream & Person::print(std::ostream & os) {
	os << this->pName << " " << this->pAdress;
	return os;
}
