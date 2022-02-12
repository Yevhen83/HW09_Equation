#include"Equation.h"
#include"LinearEquation.h"
#include"QuadraticEquation.h"
int main()
{
   double a,b,c;
    Equation* equ;

   LinearEquation lin1;
   equ = &lin1;
   cout << "Enter integers a and b for formula  \ta * x + b = 0 \n ";// a = 6, b=-24, X=4
   cout << " a - ";
   cin >> a;
   lin1.SetA(a);
   cout << " b - ";
   cin >> b;
   lin1.SetB(b);

   equ->AbstractEquation();
   cout<< equ->ToString()<<endl;

   QuadraticEquation lin2;
   cout << "Enter integers a and b for formula  \ta*x2 + b*x + c = 0 \t a != 0 \n ";//  a=4; b=21; c=5; X1= -0.25 X2= -5
   cout << " a - ";
   cin >> a;
   lin2.SetA(a);
   cout << " b - ";
   cin >> b;
   lin2.SetB(b);
   cout << " c - ";
   cin >> c;
   lin2.SetC(c);

   equ = &lin2;
   equ->AbstractEquation();
   cout<< equ->ToString()<<endl;


}

