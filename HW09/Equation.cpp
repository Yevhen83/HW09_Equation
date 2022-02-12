#include "Equation.h"
Equation::Equation()
{
	cout << "Constructor base Equation: \t " << typeid(this).name() << endl;
}

Equation::~Equation()
{
	cout << "Destructor base Equation: \t " << typeid(this).name() << endl;
}
