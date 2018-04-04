#include<iostream>
using namespace std;
class ComplexNumber
{
  
  private:
  float real;
  float imaginary;

  public:
  ComplexNumber() 
  {

  }
  ComplexNumber(float Real , float Imaginary) 
  {
    this->real=Real;
    this->imaginary=Imaginary;
  }
  ComplexNumber(ComplexNumber& CloneComplex) 
  {
    this->real=CloneComplex.real;
    this->imaginary=CloneComplex.imaginary;
  }
  void setreal(float Real)  
  {
    this->real=Real;
  }
  void setimaginary(float Imaginary) 
  {
    this->imaginary=Imaginary;
  }
  float getreal() 
  {
    return this->real;
  }
  float getimaginary() 
  {
    return this->imaginary;
  }
  ComplexNumber add(ComplexNumber z1 , ComplexNumber z2) //
  {
    ComplexNumber z3;
    z3.real=z1.real+z2.real;
    z3.imaginary=z1.imaginary+z2.imaginary;
    return z3;
  }
  ComplexNumber add(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=this->real+ z2.real;
    z3.imaginary=this->imaginary + z2.imaginary;
    return z3;
  }
  void display()
  {
    cout<<"("<<this->real<<","<<this->imaginary<<")"<<endl;
  }
ComplexNumber operator +(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=this->real+z2.real;
    z3.imaginary=this->imaginary+z2.imaginary;
    return z3;
  }
  ComplexNumber operator -(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=this->real-z2.real;
    z3.imaginary=this->imaginary-z2.imaginary;
    return z3;
  }
  ComplexNumber operator *(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=(this->real*z2.real)-(this->imaginary*z2.imaginary);
    z3.imaginary=(this->real*z2.imaginary)+(this->imaginary*z2.real);
    return z3;
  }
  ComplexNumber operator /(ComplexNumber& z2)
  {
    ComplexNumber z3;
    z3.real=(((this->real*z2.real)-(this->imaginary*-z2.imaginary))/((z2.real*z2.real)+(z2.imaginary*z2.imaginary)));
    z3.imaginary= (((this->real*-z2.imaginary)+(this->imaginary*z2.real)) / ((z2.real*z2.real)+(z2.imaginary*z2.imaginary)));
    return z3;
  }

};
ostream& operator <<(ostream& o,ComplexNumber z)
{
  return o<<"("<<z.getreal()<<","<<z.getimaginary()<<")";
}