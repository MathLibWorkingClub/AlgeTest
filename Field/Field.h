#pragma once

// E is the element supported by E
/*
*	For example, as for subclass PrimeField, E is surposed to be numZ
*	And as for RealNumberField, E is surposed to be numR
*	User are not suggested to create Field in this way
*	FactoryModel will be provided to the user to construct Field safely
*/
template <typename E> 
class Field
{
protected:
public:
	E getAddInv() = 0;
	E getMulInv() = 0;
	E add(const &E, const &E) = 0;
	E sub(const &E, const &E);  // a-b = a+(-b)
	E mul(const &E, const &E) = 0;
	E div(const &E, const &E);	// a/b = a*(b^-1)
};

