#pragma once

enum Sign {Pos, Neg};

class Num
{
public:
	Num(const &Num n);

	Num operator+(const &Num);
	Num operator-(const &Num);
	Num operator*(const &Num);
	Num operator/(const &Num);
	Num operator%(const &Num);
};