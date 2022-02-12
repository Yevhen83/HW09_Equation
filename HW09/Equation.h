#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

//template<class T>
class Equation
{
public:
	Equation();
	virtual ~Equation();
	virtual void AbstractEquation() = 0;
	virtual string ToString() = 0;
protected:
	double _a = 0, _b = 0, _c = 0, _rez = 0, _rez2 = 0;
	stringstream ss;

};

