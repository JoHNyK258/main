#include<iostream>
#include<ctime>


using namespace std;



int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}


void main()
{
	cout << Sum(5, 6) << endl;
}