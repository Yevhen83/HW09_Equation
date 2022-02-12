#include "QuadraticEquation.h"

QuadraticEquation::QuadraticEquation() : Equation()
{
	cout << "Constructor base QuadraticEquation: \t " << typeid(this).name() << endl;
}

QuadraticEquation::~QuadraticEquation()
{
	cout << "Destructor base QuadraticEquation: \t " << typeid(this).name() << endl;
}

void QuadraticEquation::AbstractEquation()
{
	if ((_c == 0) && (_b == 0)) //ax2=0
	{
		ss << "X = 0 " << endl;
		return;
	}
	else if (_b == 0) //ax2+c=0 //x2=-c/a //x = √-c/a
	{
		if ((-_c / _a) < 0)
		{
			ss << " No root!!! " << endl;//Корня нет
			return;
		}
		this->_rez = sqrt(-_c / _a);
		this->_rez2 = (sqrt(-_c / _a) * -1);

		ss << "X1= " << this->_rez << "\t X2= " << this->_rez2 << endl;
	}
	else if (_c == 0) //ax2 + bx =0; x1=0; x2 = -b/a
	{
		this->_rez = 0;
		this->_rez2 = -_b / _a;
		ss << "X1= 0" << "\t X2= " << this->_rez2 << endl;

	}
	else
	{
		double Diskrim = 0; //D=b2-4ac Finding discriminates  // нахождение дискрименанта 
		Diskrim = _b * _b - 4 * _a * _c;
		if (Diskrim < 0)
		{
			ss << "No root!!!" << endl;//Корней нет
		}
		else if (Diskrim == 0) //x=-b/2a 
		{
			this->_rez = -_b / 2 * _a;

			ss << "X= " << this->_rez << endl;
		}
		else //x1=-b+√D/2a; x2=-b-√D/2a;
		{
			this->_rez = (-_b + sqrt(Diskrim)) / (2 * _a);
			this->_rez2 = (-_b - sqrt(Diskrim)) / (2 * _a);

			ss << "X1= " << this->_rez << "\tX2= " << this->_rez2 << endl;
		}

	}


}

void QuadraticEquation::SetA(double a)
{
	_a = a;
}

void QuadraticEquation::SetB(double b)
{
	_b = b;
}

void QuadraticEquation::SetC(double c)
{
	_c = c;
}

string QuadraticEquation::ToString()
{
	return ss.str();
}
