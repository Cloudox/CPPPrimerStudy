// hello.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	using std::string;
	using namespace std;
	std::cout << "hello a\n";
	//string name = "cloudox";
	string name;
	cin >> name;
	cout << endl;
	cout << "my name is " << name;
	cin.get();
	cin.get();
	return 0;
}

