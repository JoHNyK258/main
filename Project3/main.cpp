
#include<iostream>
#include<ctime>

using namespace std;







double KmToM(double KmPH)
{
	double KmPS;
	KmPS = KmPH * 1000 / 3600;
	return KmPS;
}


double MToKm(double Msek)
{
	double KmPH;
	KmPH=Msek*36/10;
	return KmPH;
}


int Sum1(int n)
{
	int a = 0;
	
	
	for (int i = 0; i<n; i++ )
	{
	
		
		if (i % 2)
		{
			a = i * i;

		}
		else a = i;
	
	}return a;
}

int Fact(int N)
{
	if (N == 1) return 1;
	if (N == 0) return 0;
	return N * Fact(N - 1);

}


int Sum(int n)
{
	int a=0;
	for (int i = 0; i <= n; i++)
	{
		a += i;
	}return a;
}



int Mnog(int n)
{
	int a=2,c=a;
	if (n < 1) return c = 1;
	for (int i = 1; i < n; i++)
	{
		c = c*a;
	}
	return c;
}


int Duo(int n)
{

	int arr[10];
	int b;

	for (int i = 0; n/2!=0; i++)
	{
		arr[i] = n % 2;
		n /= 2;
		cout << arr[i];
	}
	
	
	return 0;
}


int Ost(int a)
{
	int c,b=0;
	do
	{
		c = a % 10;
		a /= 10;
		if (c==3)
		{
			b++;
		}

	} while (c>0);
	return b;
}

double Univ(double a, double b)
{
	
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a / b << endl;
	cout << a * b << endl;

	return 0;
}

int Fib(int i)

{
	
	

	if (i < 1) return 0;

	if (i == 1) return 1;

	return Fib(i - 1) + Fib(i - 2);

}

int Fifth(int N)
{
	cout << "� ������� �" << N + 4 << ", -�������� � ����" << endl;
	
	cout << "� ������� �" << N + 4 << ", -���������� ����" << endl;
	return 0;
}

int Fourth(int N)
{
	cout << "� ������� �" << N + 3 << ", -�������� � ����" << endl;
	Fifth(N);
	cout << "� ������� �" << N + 3 << ", -���������� ����" << endl;
	return 0;
}


int Third(int N)
{
	cout << "� ������� �" << N + 2 << ", -�������� � ����" << endl;
	Fourth(N);
	cout << "� ������� �" << N + 2 << ", -���������� ����" << endl;
	return 0;
}


int Second(int N)
{
	
	cout << "� ������� �" << N+1 << ", -�������� � ����" << endl;
	Third (N);
	cout << "� ������� �" << N + 1 << ", -���������� ����" << endl;
	return 0;
}


int First(int N)
{

	cout << "� ������� �" << N << ", -�������� � ����" << endl;
	Second (N);
	cout << "� ������� �" << N << ", -���������� ����" << endl;
	return 0;
}


int Summa(int a)
{
	if (a == 1) return 1;
	return a + Summa (a - 1);
}


int Summa1(int a)
{
	int c=0;
	for (int i = 0; a!=0; i++)
	{
		
		c += a;
		a--;
	}
	return c;
}


int main()

{
	setlocale(LC_ALL, "ru");
	const int N=5;
	int arr[N]{ 22,5,65,987,45 };

		cout << *(arr + 4) << endl;

	
	
	
	/*int* px = &N;
	cout << *px << endl;

	*/


	

	
	
	
	
	
	
	
	
	
	/*double KmH,Msek;
	int Select, SumN;
	
	
	cout << "�������� ��������: "<<endl;
	cout << "1. ��������� ��/��� � �/�" << endl;
	cout << "2. ��������� �/� � ��/���" << endl;
	cout << "3. ��������� ����� ����������� �����" << endl;
	cout << "4. ��������� ����� �������� ����������� �����" << endl;
	cin >> Select;

	switch (Select)
	{
	case 1:
		cout << "������� ��������� � ���: " << endl;
		cin >> KmH;
		cout << endl << KmH << " ��/��� = " << KmToM(KmH) << " �/�������" << endl;
		break;
	case 2:
		cout << "������� ����� � �������: " << endl;
		cin >> Msek;
		cout << endl << Msek << " �/��� = " << MToKm(Msek) << " ��/���" << endl;
		break;
	case 3:
		cout << "������� ���������� �����: " << endl;
		cin >> SumN;
		cout << endl << "����� ������ " << SumN << " ����������� ����� = " <<Sum(SumN)<< endl;
		break;
	case 4:
		cout << "������� ���������� �������� �����: " << endl;
		cin >> SumN;
		cout << endl << "����� ������ " << SumN << " �������� ����������� ����� = " << Sum1(SumN) << endl;
		break;
	default:
		cout << "�� ���������� ����!"<<endl;
		break;
	}*/
	
	


}





















//int Foo(int a)
//{
//	if (a < 1)
//	return 0;
//	a--;
//	cout << a << endl;
//	return Foo(a);
//
//}
//
//
//
//
//void main()
//{
//	setlocale(LC_ALL, "ru");
//	Foo(5);
//
//}