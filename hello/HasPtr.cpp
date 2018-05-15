#include "stdafx.h"
#include "HasPtr.h"





HasPtr::~HasPtr() {
	if (--*use == 0) {
		delete name;
		delete use;
	}
}

HasPtr::HasPtr(const HasPtr &hp): num(hp.num), name(hp.name), use(hp.use) {
	++*use;
}

HasPtr & HasPtr::operator=(const HasPtr &hp) {
	++*hp.use;
	if (--*use == 0) {
		delete name;
		delete use;
	}
	num = hp.num;
	name = hp.name;
	use = hp.use;
	return *this;
}

inline
void swap(HasPtr &lhp, HasPtr &rhp) {
	using std::swap;
	swap(lhp.name, rhp.name);
	swap(lhp.num, rhp.num);
}
