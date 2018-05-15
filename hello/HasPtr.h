#pragma once
#include <string>
class HasPtr {
public:
	HasPtr(const std::string &s = std::string()) : name(new std::string(s)), num(0), use(new std::size_t(1)) {};
	~HasPtr();
	HasPtr(const HasPtr&);
	HasPtr &operator=(const HasPtr&);
	friend void swap(HasPtr&, HasPtr&);
private:
	int num;
	std::string *name;
	std::size_t *use;
};

