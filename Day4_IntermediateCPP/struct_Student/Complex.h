#pragma once
class Complex
{
	int real;
	int imag;

public:
	//Getter
	int getReal(int r)const;
	int getImag(int i)const;

	//Setter
	void setReal(int r);
	void setImag(int i);

	//Display
	void Display();
};