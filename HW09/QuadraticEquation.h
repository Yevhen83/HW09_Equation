#pragma once
#include"Equation.h"
class QuadraticEquation : public Equation
{
public:
	QuadraticEquation();
	virtual ~QuadraticEquation();
	virtual void AbstractEquation() override;
	void SetA(double);
	void SetB(double);
	void SetC(double);
	virtual string ToString() override;

};

