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
int half(T number)
{
	return round(static_cast<double>(number / 2));
}

int main()
{



	return 0;
}