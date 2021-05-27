#include <iostream>
#include "MyLib.h"
#define CHECK if (a>= 0 && a<b){cout << "true" << endl;}else{cout << "false" << endl;}
#define SIZEARRAY cout << "Введите размер массива: ";cin >> size1;
using namespace std;

int
main()
{
	setlocale(LC_ALL, "rus");

	//1===========================================================================================
	   int size;
	   cout << "Enter size of your array: ";
	   cin >> size;
	   int* arr = new (nothrow) int[size];

	   MyLib::InitArr(arr, size);
	   MyLib::printArray(arr, size);

	   delete[]arr;

//2============================================================================================
	{
		int a, b;
		cout << "Enter the variables a and b: "<<endl;
		cin >> a;
		cin >> b;
		cout << "Checking the condition a>=0 and a<b: ";
		CHECK
	}
//3=============================================================================================
	{   
		int size1;
		SIZEARRAY
		if (size1 > 0)
		{
			int* sorting_array = new (nothrow) int[size1];

			cout << "Введите " << size1 << " чисел для заполнения массива: " << endl;
			if (sorting_array != nullptr)
			{
				for (int i = 0; i < size1; i++)
				{
					cin >> sorting_array[i];
					cout << endl;
				}
				for (int i = 0; i < size1; i++)
				{
					bool flag = true;
					for (int j = 0; j < size1 - (i + 1); j++)
					{
						if (sorting_array[j] > sorting_array[j + 1])
						{
							flag = false;
							swap(sorting_array[j], sorting_array[j + 1]);
						}
					}
					if (flag)
					{
						break;
					}


				}
			}


			cout << "Массив в отсортированном виде: ";

			for (int i = 0; i < size1; i++)
			{
				cout << sorting_array[i] << " "; 
			}
			delete[] sorting_array;
			sorting_array = nullptr;
		}
		else
		{
			cout << "Ошибка! Не удается выделить память!" << endl;
		}
	}
	return 0;
}