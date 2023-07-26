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
T half(int number)
{
	return round(static_cast<double>(number / 2));
}

int main()
{
	double a = 7.0;
	float b = 13.0;
	int c = 9;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;


	return 0;
}