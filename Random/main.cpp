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
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (maxRand<=minRand) 
		{
			cout << "Error: �� ���������� ����� �������" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (minRand<=maxRand);
	*/
	cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand>>maxRand;
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