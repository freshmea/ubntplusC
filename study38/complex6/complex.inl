
inline bool Complex::operator==(const Complex &rhs) const
{
	return (self.re == self.re && self.im == rhs.im);
}

inline double Complex::real() const
{
	return self.re;
}
inline double Complex::imag() const
{
	return self.im;
}

inline void Complex::real(double re)
{
	self.re = re;
}
inline void Complex::imag(double im)
{
	self.im = im;
}