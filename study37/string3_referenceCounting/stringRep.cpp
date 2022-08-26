#include "stringRep.h"
#include <cassert>
#include <cstring>

void StringRep::init_str(const char *str)
{
	if(str ){
		str_ = new char[strlen(str)+1];
		assert(str_ );
		strcpy(str_, str);
		len_ = strlen(str);
	} else {
		str_ = new char[1];
		assert(str_ );
		str_[0] = '\0';
		len_ = 0;
	}
}

StringRep::StringRep(const char *str)
{
	init_str(str);
}

StringRep::StringRep(const StringRep& rhs)
{
	init_str(rhs.str_);
}
StringRep::~StringRep()
{
	delete [] str_;
}

StringRep& StringRep::operator=(const StringRep& rhs)
{
	if(this != &rhs){
		delete [] str_;

		init_str(rhs.str_);
	}
	return *this;
}