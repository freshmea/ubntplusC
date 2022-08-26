#ifndef STRINGREP_H
#define STRINGREP_H

class StringRep{
friend class String;

private:
	char *str_;
	int len_;
	int rc_;

	void init_str(const char *str);

	StringRep(const char *str = 0);
	StringRep(const StringRep& rhs);
	~StringRep();

	StringRep& operator=(const StringRep& rhs);
public:

};

#endif