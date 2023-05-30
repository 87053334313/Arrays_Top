#include<iostream>
#include <time.h>

using namespace std;

void main()
{
	clock_t start = clock();
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand;
	int maxRand;

	cout << "введите минимальный диапазон чисел: "; cin >> minRand;
	cout << "введите максимальный диапазон чисел: "; cin >> maxRand;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		int index = i;
		int min = arr[i];
		for (int j = i; j < n - 1; j++)
		{
			if (min > arr[j + 1])
			{
				min = arr[j + 1];
				index = j + 1;
			}
		}
		int boofer = arr[i];
		arr[i] = arr[index];
		arr[index] = boofer;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	clock_t end = clock();
	double sec = (double)(end - start) / CLOCKS_PER_SEC;
	cout << endl << "время: " << sec << "c.";
}