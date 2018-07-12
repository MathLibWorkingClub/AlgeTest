#pragma once

#include <cstdlib>
#include <cstdint>
#include <string>

#include "Num.h"

class NumZ : public Num
{
protected:
	size_t bitPatLen;
	uint32_t* bitPat;
	Sign sign;
public:
	NumZ();
	explicit NumZ(size_t len);
	NumZ(size_t len, int_fast32_t* bPat, Sign s);
	NumZ(const NumZ&);

	NumZ operator+(const NumZ&) const;
	NumZ operator-(const NumZ&) const;
	NumZ operator*(const NumZ&) const;
	NumZ operator/(const NumZ&) const;
	NumZ operator%(const NumZ&) const;

	void operator+=(const NumZ&);
	void operator-=(const NumZ&);
	void operator*=(const NumZ&);
	void operator/=(const NumZ&);
	void operator%=(const NumZ&);

	bool operator==(const NumZ&) const;
	bool operator!=(const NumZ&) const;
	bool operator>(const NumZ&) const;
	bool operator<(const NumZ&) const;
	bool operator>=(const NumZ&) const;
	bool operator<=(const NumZ&) const;

	void compact(); // Shorten the bitPat by remove leading-zeros
};
