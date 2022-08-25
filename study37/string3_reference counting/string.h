#ifndef STRING_H
#define STRING_H
#include <ostream>
#include "stringRep.h"

class String{
// friend std::ostream& operator<<(std::ostream& out,const String& rhs);

	private:
		StringRep *rep_;

	public:
		String(const char *str = NULL);
		String(const String& rhs);
		~String();

		bool operator==(const String& rhs) const;
		String& operator=(const String& rhs);
		const String operator+(const String& rhs);
		const char* c_str() const;
		int size() const;


};

#endif