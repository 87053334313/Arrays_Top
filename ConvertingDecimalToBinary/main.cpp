#include <iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	int number;
	cout << "������� �����: "; cin >> number;
	int N = number;
	int k = 0;
	while (number/2!=0) 
	{
		//����� � ������������ �� ���� ���� while ����� ������ ��� �������� ���������� �������� , ������� ����� ����� ����� ���������� ������� +1 (k)
		/*
		int n = number % 2;
		cout << n;
		if(number/2==1)
		{
			cout << "1";
		}
		*/
		
		number = number / 2;
		k++;
	}
	k = k + 1;
	//����� ����� �� ������� �� �������� ������� ��� ��� � �� ���� ������� ����� ����� ����� ������� �� � ����� ���������� � ���������� ���� ���
	int* array = new int[k];
	int i = 0;
	number = N;
	while (number / 2 != 0)
	{
		int n = number % 2;
		if (number / 2 == 1)
		{
			array[i + 1] = 1;
		}
		number = number / 2;
		array[i] = n;
		i++;
	}
	/* ��� � �������� ����� ������� ��������� , ������� ����� ����� � ���������� �����������
	for (int i =0;i<k;i++) 
	{
		cout << array[i];
	}
	*/
	int l = k / 2;
	//�������������� ������
	for (int i =0;i<l;i++) 
	{
		int boofer = array[i];
		array[i] = array[k - 1 - i];
		array[k - 1 - i] = boofer;
	}
	cout << "����� "<<N<<" = ";
	for (int i = 0; i < k; i++)
	{
		cout << array[i];
	}
	cout << " � �������� �������";

}