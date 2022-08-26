#ifndef STRING_H
#define STRING_H
#include <ostream>
#include "stringRep.h"
class String;
std::ostream& operator<<(std::ostream& out,const String& rhs);

class String{
	private:
		StringRep *rep_;
	public:
		String();
		String(const char *str);
		String(const String& rhs);
		~String();

		bool operator==(const String& rhs) const;
		String& operator=(const String& rhs);
		const String operator+(const String& rhs) const;
		const char* c_str() const;
		int size() const;
		int rc() const;
};

#endif