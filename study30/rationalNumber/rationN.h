#ifndef RATIONN_H
#define RATIONN_H

class RationN{
	private:	// 내부구현.
		int car; 	//up number cardinal number
		int ord; 	//down number ordinal number
	public:		// 왜부 인터페이스. 
		RationN();						// default constructor 디폴트 생성자.
		RationN(int car);				// convert constructor 변환 생성자. 
		RationN(int car, int ord);	// constructor 그냥.. 생성자. 
		~RationN();

		int card();
		int ordi();

		void card(int car);
		void ordi(int ord);
		void rMultiply(RationN *pr1);
		void optimal();
		void rPlus(RationN *pr1);
		void rMinus(RationN *pr1);
		void rDevide(RationN *pr1);
		double print();
};

#endif