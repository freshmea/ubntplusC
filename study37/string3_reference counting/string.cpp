#include <cstring>
#include <cassert>
#include <iostream>
#include "string.h"

// std::ostream& operator<<(std::ostream& out, const String& rhs)
// {
// 	out << rhs.rep_->str_ ;
// 	return out;
// }

String::String(const char *str)
{
	rep_ = new StringRep(str);
	assert(rep_);

	rep_->rc_ = 1;
}

String::String(const String& rhs)
{
	rep_ = rhs.rep_;
	++rep_->rc_;
}

String::~String()
{
	--rep_->rc_;
	if(!rep_->rc_)
		delete rep_;
}

bool String::operator==(const String& rhs) const
{
	return !strcmp(rep_->str_, rhs.rep_->str_);
}

String& String::operator=(const String& rhs)
{
	if(this != &rhs){
		--rep_->rc_;
		if(rep_->rc_ == 0)
			delete rep_;
		rep_ = rhs.rep_;
		++rep_->rc_;
	}
	return *this;
}

const String String::operator+(const String& rhs)
{
	char *buf = new char[rep_->len_+rhs.rep_->len_+1];
	assert(buf );
	strcpy(buf, rep_->str_);
	strcat(buf, rhs.rep_->str_);

	String result(buf);
	delete [] buf;

	return result;
}

const char *String::c_str() const
{
	return rep_->str_;
}

int String::size() const
{
	return rep_->len_;
}
