﻿#include <iostream>
using namespace std;
class complex {
public:
	double real, image;
public:
	complex( ) {
		real = 0;
		image = 0;
	}
	complex(double real1, double image1) {
		this->real = real1;
		this->image = image1;
	}
	void display() {
		cout << this->real << '\t' << this->image << endl;
	}
	//友元
	/*
	friend complex operator +(complex A, complex B)
	{
		return complex(A.real + B.real, A.image + B.image);
	}

	friend complex operator ++(complex&A) {
		return complex(++A.real, A.image);
	}

	friend complex operator  ++(complex& A, int) {
		return complex(A.real++, A.image);
	}
	*/

	//成员函数
	complex operator +(complex A);
	complex operator ++();
	complex operator ++(int);
	complex operator =(complex A);
};

complex complex::operator +(complex A)
{
	return complex(this->real + A.real, this->image + A.image);
}
complex complex::operator ++()
{
	return complex(++real, image);
}
complex complex::operator ++(int)
{
	return complex(real++, image);
}
complex complex::operator= (complex A)
{
	this->real = A.real; this->image = A.image;
	return complex(real, image);
}
int main()
{
	complex comp1,C;
	comp1.real = 1.0;
	comp1.image = 1.0;
	comp1.display();
	complex comp2(2.0, 2.0);
	comp2.display();
	C=comp1+comp2;
	C.display();
	C++;
	C.display();
	++C;
	C.display();
	comp1 = C;
	comp1.display();
	system("pause");
}
