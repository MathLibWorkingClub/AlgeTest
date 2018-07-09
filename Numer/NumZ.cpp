#include "NumZ.h"

NumZ::NumZ()
{
}

NumZ::NumZ(size_t len)
{
}

NumZ::NumZ(size_t len, int_fast32_t * bPat, Sign s)
{
}

NumZ::NumZ(const NumZ& opd)
{
	this->bitPatLen = opd.bitPatLen;
	this->sign = opd.sign;
	this->bitPat = new uint32_t[opd.bitPatLen];

	memcpy(this->bitPat, opd.bitPat, sizeof(uint32_t)*this->bitPatLen);
}

NumZ NumZ::operator+(const NumZ&)
{
	return NumZ();
}

NumZ NumZ::operator-(const NumZ&)
{
	return NumZ();
}

NumZ NumZ::operator*(const NumZ&)
{
	return NumZ();
}

NumZ NumZ::operator/(const NumZ&)
{
	return NumZ();
}

NumZ NumZ::operator%(const NumZ&)
{
	return NumZ();
}

void NumZ::operator+=(const NumZ&)
{
}

void NumZ::operator-=(const NumZ&)
{
}

void NumZ::operator*=(const NumZ&)
{
}

void NumZ::operator/=(const NumZ&)
{
}

void NumZ::operator%=(const NumZ&)
{
}

bool NumZ::operator==(const NumZ&)
{
	return false;
}

bool NumZ::operator!=(const NumZ&)
{
	return false;
}

bool NumZ::operator>(const NumZ&)
{
	return false;
}

bool NumZ::operator<(const NumZ&)
{
	return false;
}

bool NumZ::operator>=(const NumZ&)
{
	return false;
}

bool NumZ::operator<=(const NumZ&)
{
	return false;
}

void NumZ::compact()
{
}
