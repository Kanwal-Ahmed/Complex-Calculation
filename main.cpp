#include<iostream>
#include "complex.h"
using namespace std;
int main()
{
  ComplexNumber z1(2,3);
  ComplexNumber z2(4,2);
  ComplexNumber z3;
  z3=z1+z2;
  cout<<"Addition:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3=z1-z2;
  cout<<"Subtraction:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3=z1*z2;
  cout<<"Multiplication:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3 = z1 / z2;
  cout<<"Division:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
 system("pause");
}