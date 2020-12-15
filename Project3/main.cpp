
#include<iostream>
#include<ctime>

using namespace std;






void main()
{
	setlocale(LC_ALL, "ru");

	const int size = 10;
	int arr[size];
	int b = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%1000+1;
	}


	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
	
	
	
	/// <summary>
	

	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{


			if (arr[i] % 2 != 0)
			{

				int a = 0;
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;

			}



		}
	}

	


/// </summary>





	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			b++;
		}
		cout << arr[i] << "\t";
	}cout << endl;





	for (int k = 0; k < size - b; k++)
	{


		for (int i = 0; i < size - b; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int a = 0;
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;

			}



		}
	}
	for (int k = size - b; k < size - 1; k++)
	{


		for (int i = size - b; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int a = 0;
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;

			}



		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}