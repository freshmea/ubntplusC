#ifndef STRINGREP_H
#define STRINGREP_H

class StringRep{
friend class String;

private:
	char *str_;
	int len_;
	int rc_;
	StringRep();
	StringRep(const char *str);
	StringRep(const StringRep& rhs);				// not use!! deep copy 를 하지 않을거기 때문이다. 
	~StringRep();

	StringRep& operator=(const StringRep& rhs);		// not use!! deep copy 를 하지 않을거기 때문이다. 
public:
};

#endif