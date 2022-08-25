#ifndef INVALID_INDEX_H
#define INVALID_INDEX_H
#include <string>

class InvalidIndex {
private:
	int index_;
public:
	explicit InvalidIndex(int index);

	int invalid() const;

	std::string what() const;
};

#endif