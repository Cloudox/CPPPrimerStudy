// hello.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
//#include "Stock.h"
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <map>
#include <set>
#include "Sales_item.h"
#include "Sales_data.h"
#include <initializer_list>
#include <cassert>
#include "Person.h"
#include <fstream>
#include <stack>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <utility>
#include <memory>
#include <new>
#include "TextQuery.h"
#include "QueryResult.h"
#include "Quote.h"
#include "Bulk_Quote.h"
#include "Limit_Bulk_Quote.h"
#include "Disc_quote.h"

#define NDEBUG

std::vector<int>::iterator find(std::vector<int>::iterator begin, std::vector<int>::iterator end, int target) {
	while (begin != end) {
		if (*begin == target) break;
		begin++;
	}
	return begin;
}


void output(const std::vector<int> l) {
	auto iter = l.begin();
	while (iter != l.end()) {
		std::cout << *iter << std::endl;
		iter++;
	}
}

void runQueries(std::ifstream &infile) {
	TextQuery tq(infile);
	using namespace std;
	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

double print_total(std::ostream &os, const Quote &item, size_t n) {
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " total due: " << ret << std::endl;
	return ret;
}


template <typename T>
int compare(const T &v1, const T &v2) {
	if (v1 < v2) return -1;
	if (v2 < v1) return 1;
	return 0;
}


int main() {
	using std::string;
	using namespace std;

	Sales_data data1, data2;
	cout << compare(data1, data2) << endl;

	//Quote q("ouxiao", 100);
	//Bulk_Quote bq("cloudox", 100, 10, 0.9);
	//Limit_Bulk_Quote lbq("ou", 100, 5, 0.9); 
	////print_total(cout, q, 10);
	////print_total(cout, bq, 10);
	////print_total(cout, lbq, 10);
	//vector<shared_ptr<Quote>> vec;
	//vec.push_back(make_shared<Bulk_Quote>(bq));
	//vec.push_back(make_shared<Limit_Bulk_Quote>(lbq));
	//double ret = vec[0]->net_price(10) + vec[1]->net_price(10);
	//cout << ret << endl;

	//Sales_data data1(cin);
	//data1.print(cout);

	//Person person1("a", "b");
	////person1.read(cin);
	//person1.print(cout);

	//Screen myScreen(5, 5, 'X');
	//myScreen.move(4, 0).set('A').display(cout);
	//cout << "\n";
	//myScreen.display(cout);
	//cout << "\n";


	cin.get();
	cin.get();
    return 0;
}

