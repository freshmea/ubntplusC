#ifndef STRING_H
#define STRING_H
#include <ostream>

class String{
friend std::ostream& operator<<(std::ostream& out,const String& rhs);

	private:
		char *str;
		int len;
	public:
		String();
		String(const char *str);
		String(const String& rhs);
		~String();

		bool operator==(const String& rhs);
		String& operator=(const String& rhs);
		const String operator+(const String& rhs);
		const char* c_str();
		int size();


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