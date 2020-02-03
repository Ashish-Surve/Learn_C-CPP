#include"Complex.h"
#include<iostream>
using namespace std;

//Getter
int Complex::getReal(int r)const 
{
	return real;
}
int Complex::getImag(int i)const
{
	return imag;
}

//Setter
void Complex::setReal(int r)
{
	real = r;
}
void Complex::setImag(int i)
{
	imag = i;
}

void Complex::Display()
{
	cout << endl << "Real : " << real << endl;
	cout  << "Imaginary : " << imag << endl;
}