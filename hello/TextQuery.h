#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <memory>
#include <map>
#include <set>
#include "QueryResult.h"

class QueryResult;
class TextQuery {
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream&);
	QueryResult query(const std::string&) const;
	~TextQuery();
private:
	std::shared_ptr<std::vector<std::string>> file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

