#include "invalidindex.h"

InvalidIndex::InvalidIndex(int index)
:index_(index){}

int InvalidIndex::invalid() const
{
	return index_;
}

std::string InvalidIndex::what() const
{
	std::string result("Invalid Index : ");
	result += std::to_string(index_);

	return result;
}