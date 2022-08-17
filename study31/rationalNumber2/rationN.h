#ifndef RATIONN_H
#define RATIONN_H
#include <ostream>

class RationN{
friend std::ostream& operator<<(std::ostream& out,const RationN& rhs);
	private:
		int car; 	//up number cardinal number
		int ord; 	//down number ordinal number
	public:
		RationN(int car = 0, int ord = 1);
		RationN(const RationN& rhs);
		~RationN();

		RationN& operator=(const RationN& rhs);
		RationN& operator+=(const RationN& rhs);
		RationN& operator-=(const RationN& rhs);
		RationN& operator*=(const RationN& rhs);
		RationN& operator/=(const RationN& rhs);
		RationN& operator=(const int& rhs);
		RationN& operator+=(const int& rhs);
		RationN& operator-=(const int& rhs);
		RationN& operator*=(const int& rhs);
		RationN& operator/=(const int& rhs);

		bool operator==(const RationN& rhs);
		bool operator!=(const RationN& rhs);
		bool operator>(const RationN& rhs);
		bool operator<(const RationN& rhs);
		bool operator<=(const RationN& rhs);
		bool operator>=(const RationN& rhs);
		
		RationN operator*(const RationN& rhs);
		RationN operator*(const int& rhs);
		RationN operator+(const RationN& rhs);
		RationN operator+(const int& rhs);
		RationN operator-(const RationN& rhs);
		RationN operator-(const int& rhs);
		RationN operator/(const RationN& rhs);
		RationN operator/(const int& rhs);
		int card();
		int ordi();

		void card(int car);
		void ordi(int ord);
		void optimal();
		double rPrint();
};

#endif