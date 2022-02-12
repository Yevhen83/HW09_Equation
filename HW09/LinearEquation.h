#pragma once
#include"Equation.h"

class LinearEquation : public Equation
{
public:
	LinearEquation();
	virtual ~LinearEquation();
	virtual void AbstractEquation() override;
	void SetA(double);
	void SetB(double);
	virtual string ToString() override;


};

