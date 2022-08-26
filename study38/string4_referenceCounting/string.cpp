#include <cstring>
#include <cassert>
#include <iostream>
#include "string.h"

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	return out << rhs.c_str() << ", len : " <<rhs.size() << ", rc : " << rhs.rc();
}

String::String()
{
	rep_ = new StringRep();
	rep_->rc_ = 1;
}

String::String(const char *str)
{
	rep_ = new StringRep(str);
	assert(rep_);
	strcpy(rep_->str_,str);
	rep_->rc_ = 1;
}

String::String(const String& rhs)
{
	rep_ = rhs.rep_;
	++rep_->rc_;
}

String::~String()
{
	std::cout << "destructor execution!" << std::endl;
	if(!--rep_->rc_) delete rep_;

}

String& String::operator=(const String& rhs)
{
	if(this != &rhs){
		if(!--rep_->rc_) {
			std::cout << "destructor execution!" << std::endl;
			delete rep_;
		}
		rep_ = rhs.rep_;
		++rep_->rc_;
	}
	return *this;
}

bool String::operator==(const String& rhs) const
{
	return !strcmp(rep_->str_, rhs.rep_->str_);
}

const String String::operator+(const String& rhs) const
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

int String::rc() const
{
	return rep_->rc_;
}