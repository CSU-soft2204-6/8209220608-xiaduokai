#include<iostream>
using namespace std;
#include "mytemperature.h"
#include"mytemperature.cpp"
int main()
{
	double m, n;
	cout << "Celsius Fahrenheit |Fahrenheit Celsius" << endl;
	cout << "40.0" << "     " << celsius_to_fah(40.0) << "       " << "|" << " " << "120.0" << "     " << fah_to_ceisius(120.0) << endl;
	cout << "39.0" << "     " << celsius_to_fah(39.0) << "     " << "|" << " " << "110.0" << "     " << fah_to_ceisius(110.0) << endl;
	cout << "......" << "  " << "......" << "     " << "|" << " " << "......" << "     " << "......" << endl;
	cout << "31.0" << "     " << celsius_to_fah(31.0) << "      " << "|" << " " << "30.0" << "     " << fah_to_ceisius(30.0) << endl;
	return 0;
}


