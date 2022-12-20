#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	return cel * 1.8 + 32;
}
double fah_to_ceisius(double fah)
{
	return (fah - 32) / 1.8;
}