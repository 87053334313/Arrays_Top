#include<iostream>

using namespace std;

#define tab "\t"

void main() 
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	
	int minRand;
	int maxRand; 
	/*do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (maxRand<=minRand) 
		{
			cout << "Error: Вы перепутали числа местами" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (minRand<=maxRand);
	*/
	cout << "Введите минимально возможное случайное число: "; cin >> minRand>>maxRand;
	if (maxRand<minRand) 
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}

	for (int i =0;i<n;i++) 
	{
		arr[i] = rand()%(maxRand-minRand) + minRand;
	}

	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}