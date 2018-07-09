#pragma once

enum Sign {Pos, Neg};

class Num
{
public:
	Num();
	Num(const Num&);

	Num operator+(const Num&);
	Num operator-(const Num&);
	Num operator*(const Num&);
	Num operator/(const Num&);
	Num operator%(const Num&);
};