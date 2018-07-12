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

NumZ NumZ::operator+(const NumZ& opd)
{
	if (this->sign == opd.sign) {
		NumZ rst = NumZ();
		rst.bitPatLen = (opd.bitPatLen + this->bitPatLen + abs(opd.bitPatLen - this->bitPatLen)) / 2 + 1;
		rst.bitPat = new unit32_t[this->bitPatLen];
		int k = 0;
		for (size_t i = 0; i < this->bitPatLen; i++) {
			if (temp->bitPat[i] == opd.bitPat[i]) {
				rst.bitPat[i] = k;
				if (opd.bitPat[i] == 1) {
					k = 1;
				}
			}
	else if (k == 1) {
				rst.bitPat[i] = 0;
			}
	else {
		rst.bitPat[i] = 1;
		k = 0;
	}
		}
	}
}
rst.compact();

return rst;
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
	size_t k = 0;
	for (size_t i = this->bitPatLen-1; this->bitPat[ i ] ==0&&i>0; i--)
	{
		k++;
	};
	this->bitPatLen = this->bitPatLen - k;
	unit32_t* temp =new unit32_t[this->bitPatLen];
	memcpy(temp.bitPat, temp.bitPat, sizeof(uint32_t)*this->bitPatLen);
	delete[]this->bitPat;
	this->bitPat =temp;
	
}
