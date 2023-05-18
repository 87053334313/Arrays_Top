#include <iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	int number;
	cout << "введите число: "; cin >> number;
	int N = number;
	int k = 0;
	while (number/2!=0) 
	{
		//здесь я тренировался но этот блок while нужен только для подсчета количества итераций , которые будут равны числу эллементов массива +1 (k)
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
	//здесь никак не сделать по обычному массиву так как я не знаю заранее какая будет длина массива но я плохо разбираюсь в указателях пока что
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
	/* это я проверял вывод массива исходного , который будет нужно в дальнейшем перевернуть
	for (int i =0;i<k;i++) 
	{
		cout << array[i];
	}
	*/
	int l = k / 2;
	//переворачиваем массив
	for (int i =0;i<l;i++) 
	{
		int boofer = array[i];
		array[i] = array[k - 1 - i];
		array[k - 1 - i] = boofer;
	}
	cout << "число "<<N<<" = ";
	for (int i = 0; i < k; i++)
	{
		cout << array[i];
	}
	cout << " в двоичной системе";

}