#ifndef RATIONN_H
#define RATIONN_H

class RationN{
	private:	// 내부구현.
		int car; 	//up number cardinal number
		int ord; 	//down number ordinal number
	public:		// 외부 인터페이스. 
		RationN();						// default constructor 디폴트 생성자.
		RationN(int car);				// convert constructor 변환 생성자. 
		RationN(int car, int ord);	// constructor 그냥.. 생성자. 
		RationN(const RationN &rhs);
		~RationN();

		void operator=(const RationN &rhs);
		bool operator==(const RationN &rhs);
		int card();
		int ordi();

		void card(int car);
		void ordi(int ord);
		RationN operator*(const RationN &rhs);
		RationN operator*(const int &rhs);
		void optimal();
		RationN operator+(const RationN &rhs);
		RationN operator+(const int &rhs);
		RationN operator-(const RationN &rhs);
		RationN operator-(const int &rhs);
		RationN operator/(const RationN &rhs);
		double rPrint();
};

#endif