#pragma once
#include <string>
class Screen {
public:
	typedef std::string::size_type pos;
	Screen();
	Screen(const pos h, const pos w) : height(h), width(w) {};
	~Screen();
	friend class Window_mgr;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {};
	char get() const { return contents[cursor]; }
	inline char get(pos ht, pos wd) const;
	Screen &set(char c);
	Screen &display(std::ostream &os) { do_display(os); return *this; }
	Screen &move(pos r, pos c);
	void some_member() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;
	void do_display(std::ostream &os) const { os << contents; }
};

