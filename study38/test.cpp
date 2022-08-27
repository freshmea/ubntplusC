#include <iostream>
using namespace std;

class A{
friend class B;
private:
	char a_;
public:
	A(char a): a_(a){cout << "A construction!" << endl;}
	char a(){
		return a_;
	}
	~A(){
		cout << a_ << "A destruction!" << endl;
	}
};

class B{
private:
	char b_;
public:
	B(): b_('b'){cout << "B construction!" << endl;}
	~B(){
		cout << b_ << "B destruction!" << endl;
	}
	char b(){
		return b_;
	}
	char a(A aVal){
		return aVal.a_;
	}
};

class C : public B{
private:
	char c_;
public:
	C() : c_('c'){cout << "C construction!" << endl;}
	char c(){
		return c_;
	}
	~C(){
		cout << c_ << "C destruction!" << endl;
	}
};

int main()
{
	A aVal='h';
	cout << aVal.a() << endl;
	B bVal;
	cout << bVal.b() << endl;
	cout << bVal.a(aVal) << endl;

	C cVal;
	cout << cVal.a(aVal) << endl;
	cout << cVal.b() << endl;
	cout << cVal.c() << endl;

	cout << aVal.a()<< endl;

	return 0;
}