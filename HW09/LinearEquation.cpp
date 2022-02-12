#include "LinearEquation.h"

LinearEquation::LinearEquation() : Equation()
{
	//this->_a = 0;
	//this->_b = 0;
	cout << "Constructor base LinearEquation: \t " << typeid(this).name() << endl;
}

LinearEquation::~LinearEquation()
{
	cout << "Destructor base LinearEquation: \t " << typeid(this).name() << endl;
}

void LinearEquation::AbstractEquation()
{
	
	if ((_a == 0) && (_b != 0))
	{
		this->ss << "The linear equation of roots has no! " << endl;//Ћинейное уравнение корней не имеет!
		return;
	}
	else if ((_a == 0) && (_b == 0))
	{
		this->ss << "Roots at the levels of infinite set! " << endl; // орней у уровнени€ бесконечное множество!
		return;

	}
	else if ((_b == 0) && (_a != 0))
	{
		this->ss << "X = 0 " << endl;
		this->_rez = 0;
		return;
	}
	else
	{
		this->_rez = -_b / _a;//x=-b/a
		this->ss << "X = " << this->_rez << endl;
	}

}

void LinearEquation::SetA(double a)
{
	this->_a = a;
}

void LinearEquation::SetB(double b)
{
	this->_b = b;
}

string LinearEquation::ToString()
{
	return this->ss.str();
}
