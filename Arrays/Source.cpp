#include<iostream>
using namespace std;


void main() 
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) 
	{
		cout << "������� ����� ������� ��� �������� " << i << ": ";
		cin>>arr[i];
		cout << endl;
	}
	cout << "����� � ������� �����������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << "����� � ������� �������� " << endl;
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	int sum = 0;
	for (int i =0;i<SIZE;i++) 
	{
		sum += arr[i];
	}
	cout << "����� = " << sum << endl;;

	double sredArifm = (double)sum / SIZE;
	cout << "������� �������������� = " << sredArifm << endl;

	int min = arr[0];
	for (int i =1;i<SIZE;i++) 
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� = " << min << endl;

	int max = arr[0];
	for (int i =1;i<SIZE;i++) 
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	cout << "������������ = "<<max<<endl;
}