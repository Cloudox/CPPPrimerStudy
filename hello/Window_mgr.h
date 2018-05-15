#pragma once
#include "Screen.h"
#include <vector>


class Window_mgr {
public:
	Window_mgr();
	~Window_mgr();
	
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

