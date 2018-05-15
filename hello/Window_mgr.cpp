#include "stdafx.h"
#include "Screen.h"
#include "Window_mgr.h"
#include <string>


Window_mgr::Window_mgr() {
}


Window_mgr::~Window_mgr() {
}

void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}
