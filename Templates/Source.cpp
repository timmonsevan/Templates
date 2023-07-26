// Evan Timmons
// CIS 1202 5T1
// 7/26/23

#include<iostream>
#include<cmath>
using namespace std;

template <typename T>
T half(T number)
{
	return number / 2;
}

template <typename T>
int intHalf(T number)
{
	return round(static_cast<double>(number / 2));
}

int main()
{
	double a = 6.66;
	float b = 14.42;
	int c = 9;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << intHalf(c) << endl;


	return 0;
}