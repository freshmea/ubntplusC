#ifndef STRING_H
#define STRING_H
#include <ostream>

class String{
friend std::ostream& operator<<(std::ostream& out,const String& rhs);

private:
	char *str;
	int len;

	String(const char *str, bool);
	void init_str(const char *str);		// 내부적으로사용 tool function. helper function.
public:
	String(const char *str = NULL);
	String(const String& rhs);
	~String();

	bool operator==(const String& rhs) const;
	String& operator=(const String& rhs);
	String& operator=(const char *str);
	const String operator+(const String& rhs) const;
	const char* c_str() const;
	int size() const;


	// String& operator=(const String& rhs);
	// String& operator+=(const String& rhs);
	// String& operator-=(const String& rhs);
	// String& operator*=(const String& rhs);
	// String& operator/=(const String& rhs);
	// String& operator=(const int& rhs);
	// String& operator+=(const int& rhs);
	// String& operator-=(const int& rhs);
	// String& operator*=(const int& rhs);
	// String& operator/=(const int& rhs);

	// bool operator==(const String& rhs);
	// bool operator!=(const String& rhs);
	// bool operator>(const String& rhs);
	// bool operator<(const String& rhs);
	// bool operator<=(const String& rhs);
	// bool operator>=(const String& rhs);
	// int card();
	// int ordi();

	// void card(int car);
	// void ordi(int ord);
	// void optimal();
	// String operator*(const String& rhs);
	// String operator*(const int& rhs);
	
	// String operator+(const int& rhs);
	// String operator-(const String& rhs);
	// String operator-(const int& rhs);
	// String operator/(const String& rhs);
	// String operator/(const int& rhs);
	// double rPrint();
};

#endif