#include <cstring>
#include <cassert>
#include <iostream>
#include "string.h"
#define self	(*this)

void String::init_str(const char *str)
{
	if(str ){
		self.len = strlen(str);
		self.str = new char[self.len+1];
		assert(self.str );
		strcpy(self.str, str);
	} else {
		self.len = 0;
		self.str = new char[1];
		assert(self.str );
		self.str[0] = '\0';
	}
}

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	out << rhs.str ;
	return out;
}

String::String(const char *str, bool)
{
	self.str = (char *)str;
	self.len = strlen(str);
}

String::String(const char *str)
{
	self.init_str(str);
}

String::String(const String& rhs)
{
	self.init_str(rhs.str);
}

String::~String()
{
	// std::cout << "Destructor excution!" << std::endl;
	delete [] self.str;
}

const char *String::c_str() const
{
	return self.str;
}

int String::size() const
{
	return self.len;
}

bool String::operator==(const String& rhs) const
{
	return strcmp(self.str, rhs.str) == 0;
}

String& String::operator=(const String& rhs)
{
	if( this != &rhs){
		delete [] self.str;
		self.init_str(rhs.str);
	}
	return self;
}

String& String::operator=(const char *str)
{
	if( self.str != str){
		delete [] self.str;
		self.init_str(str);
	}
	return self;
}

// const String String::operator+(const String& rhs) const
// {
// 	char *buf = new char[self.len + rhs.len+1];
// 	assert(buf );
// 	strcpy(buf, self.str);
// 	strcat(buf, rhs.str);

// 	String result(buf);
// 	delete [] buf;
// 	return result;
// }

const String String::operator+(const String& rhs) const
{
	char *buf = new char[self.len + rhs.len+1];
	assert(buf );
	strcpy(buf, self.str);
	strcat(buf, rhs.str);

	String result(buf, true);
	// delete [] buf;
	return result;
}