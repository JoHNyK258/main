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

cout << "Введите ширину прямоугольника: " <<endl;
cin >> b;
cout << "Введите высоту прямоугольника: " <<endl;
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
cout << "Прямоугольник " <<b<<" на "<<a<< endl;



/*
int digit = 0;	 // число для расчета
char exit = 'y'; // для выхода или продолжения
				 for (; exit != 'y' && exit != 'Y';)
{
	cout << "Введите число: ";
	cin >> digit;
	cout << "Квадрат " << digit << " = " << digit * digit;
	cout << "\nПродолжить ввод чисел - Y, Выйти  - N: ";
	cin >> exit; // выбор пользователя


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

	cout << "Введите ширину прямоугольника: " <<endl;
	cin >> b;
	cout << "Введите высоту прямоугольника: " <<endl;
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
	cout << "Прямоугольник " <<b<<" на "<<a<< endl;*/
					 
					 
					 
					 /*
					 int digit = 0;	 // число для расчета
	char exit = 'y'; // для выхода или продолжения
					 for (; exit != 'y' && exit != 'Y';)
	{
		cout << "Введите число: ";
		cin >> digit;
		cout << "Квадрат " << digit << " = " << digit * digit;
		cout << "\nПродолжить ввод чисел - Y, Выйти  - N: ";
		cin >> exit; // выбор пользователя
	
			
	}
	return;*/
















	/*int b,c;
	char a;
	cout << "Введите символ: " << endl;
	cin >> a;
	cout << "Введите количество символов: " << endl;
	cin >> b;
	cout << "Выберите тип линии: " << endl<<
		"1. Горизонтальная"<<endl <<
		"2. Вертикальная"<<endl;
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
		cout << "Ошибка!Пункт меню отсутствует!" << endl;
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
				cout << "Не чётное число: " << a << endl;
				с += a;
			}
			else
			{
				cout << "Чётное число: " << a << endl;
				d += a;
			}
			a++;



		}
	 while (a <= b);
	
	
	cout << "Сумма чётных чисел = " << d << endl;
	cout << "Сумма не чётных чисел = " << с << endl;
	*/

}