
#include<iostream>
#include<ctime>

using namespace std;

double Sum(double a, double b, double c)
{
	return a + b +c;
}

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int Sum(int a, int b, int c)
{
	return a + b + c;

}

void main()
{
	cout << Sum(6, 5) << endl;
	cout << Sum(6.3, 5.2) << endl;
	cout << Sum(6, 5, 8) << endl;
	cout << Sum(6.3, 5.5, 8.8) << endl;
}