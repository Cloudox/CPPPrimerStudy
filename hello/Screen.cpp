#include "stdafx.h"
#include "Screen.h"


Screen::Screen() {
}


Screen::~Screen() {
}

inline char Screen::get(pos ht, pos wd) const {
	pos row = ht * width;
	return contents[row + wd];
}

Screen & Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

Screen & Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

void Screen::some_member() const {
	++access_ctr;
}
