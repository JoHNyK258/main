
#include<iostream>
#include<ctime>

using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");

	int a=1, b=0, n;
	cout << "������� �����: " << endl;
	cin >> n;

	if (n>0)
	{

	
	 while (a<=n)

	 {
		b = b + a * a;
		a++;
	 }cout << "����� ���������: " << b << endl;
	}
	else
	{
		cout << "������� �� ���������� ��������!!!" << endl;
	}



	

}