#include "stdafx.h"
#include "QueryResult.h"


QueryResult::QueryResult() {
}


QueryResult::~QueryResult() {
}

std::ostream & print(std::ostream &os, const QueryResult &qr) {
	using namespace std;
	os << qr.sought << " occurs " << qr.lines->size() << " " << (qr.lines->size()>0 ? "times" : "time") << endl;
	for (auto num : *qr.lines)
		os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
	return os;
}

