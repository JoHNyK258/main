#include<iostream>
#include<ctime>
using namespace std;



void FillArray(int arr[],const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

int main()
{
int a, b;

cout << "������� ������ ��������������: " <<endl;
cin >> b;
cout << "������� ������ ��������������: " <<endl;
cin >> a;

for (int j = 0; j < b; j++)
{
	for (int y = 0; y <a; y++)
	{
		cout << "*";

	}
	cout << endl;

}
cout<< endl;
cout << "������������� " <<b<<" �� "<<a<< endl;



/*
int digit = 0;	 // ����� ��� �������
char exit = 'y'; // ��� ������ ��� �����������
				 for (; exit != 'y' && exit != 'Y';)
{
	cout << "������� �����: ";
	cin >> digit;
	cout << "������� " << digit << " = " << digit * digit;
	cout << "\n���������� ���� ����� - Y, �����  - N: ";
	cin >> exit; // ����� ������������


}
return;

	
	
	
	
	
	
	
	
	
	
	
	
	
	/*srand(time(NULL));

	const int ROW = 5, COL = 8;
	
	

	int arr[ROW][COL];
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j]<<" ";
		}cout << endl;
	}
	
	
	
	
	
	
	
	int a;
	a = 0;*/





























	/*srand(time(NULL));

	int const SIZE = 10;

	int arr[SIZE];
	bool alreadyThere;
	int min;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int a = rand() % 20;

		for (int j = 0; j<SIZE; j++)

		{
			
			
			if (arr[j]==a)
			{
				alreadyThere = true;
				break;
			}
		}
		
		if (!alreadyThere)
		{
			arr[i] = a;
			i++;
		}
		
		
		
	}min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		
		cout << arr[i] << endl;
		if (arr[i] < min)
		{
			min = arr[i];

		}
	}cout << "Min= " << min << endl;*/





		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*int a, b;

	cout << "������� ������ ��������������: " <<endl;
	cin >> b;
	cout << "������� ������ ��������������: " <<endl;
	cin >> a;

	for (int j = 0; j < b; j++)
	{
		for (int y = 0; y <a; y++)
		{
			cout << "*";

		}
		cout << endl;
		
	}
	cout<< endl;
	cout << "������������� " <<b<<" �� "<<a<< endl;*/
					 
					 
					 
					 /*
					 int digit = 0;	 // ����� ��� �������
	char exit = 'y'; // ��� ������ ��� �����������
					 for (; exit != 'y' && exit != 'Y';)
	{
		cout << "������� �����: ";
		cin >> digit;
		cout << "������� " << digit << " = " << digit * digit;
		cout << "\n���������� ���� ����� - Y, �����  - N: ";
		cin >> exit; // ����� ������������
	
			
	}
	return;*/
















	/*int b,c;
	char a;
	cout << "������� ������: " << endl;
	cin >> a;
	cout << "������� ���������� ��������: " << endl;
	cin >> b;
	cout << "�������� ��� �����: " << endl<<
		"1. ��������������"<<endl <<
		"2. ������������"<<endl;
	cin >> c;
	switch (c)
	{
	case 1:
		while (b != 0)
		{
			cout << a;
			b--;
		}cout << endl;
		break;
	case 2:
		while (b != 0)
		{
			cout << a << endl;
			b--;
		}
		break;
	default:
		cout << "������!����� ���� �����������!" << endl;
		break;
	} */
	
	
	
	
	/*while (b!=0)
	{
		cout <<a<< endl;
		b--;

	}*/
	
	
	
	
	
	
	/*do
	{
		cout << a << endl;
		a++;
	} while (a<20);
	*/
	
	/*do
		{

			if (a % 2)
			{
				cout << "�� ������ �����: " << a << endl;
				� += a;
			}
			else
			{
				cout << "׸���� �����: " << a << endl;
				d += a;
			}
			a++;



		}
	 while (a <= b);
	
	
	cout << "����� ������ ����� = " << d << endl;
	cout << "����� �� ������ ����� = " << � << endl;
	*/

}