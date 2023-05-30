#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "введите число: "; cin >> number;
	int N = number;
	int k = 0;
	while (number / 2 != 0)
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
	for (int i = 0; i < l; i++)
	{
		int boofer = array[i];
		array[i] = array[k - 1 - i];
		array[k - 1 - i] = boofer;
	}
	cout << "число " << N << " = ";
	for (int i = 0; i < k; i++)
	{
		cout << array[i];
	}
	cout << " в двоичной системе";
	//работа с шестандцатеричной системой счисления
	int count_number_4 = k / 4;
	int count_balance = k % 4;
	int i_ostatok;
	if (count_balance!=0) 
	{
		i_ostatok = 1;
	}
	else 
	{
		i_ostatok = 0;
	}
	int K = count_number_4 + i_ostatok;
	//cout<<endl << K<<endl;
	cout << endl;
	int* array2 = new int[K];
	int j = 0;
	for (int i =k-1;i>=0;i=i-4) 
	{
		int a=0, b=0, c=0, d = 0;
	    a = array[i];
		if(i-1>=0)
	    b = array[i-1] * 10;
		if (i - 2 >= 0)
	    c = array[i - 2] * 100;
		if (i - 3 >= 0)
		d = array[i - 3] * 1000;
		array2[j] = a + b + c + d;
		j++;
	}
	/*for (int i =0;i<K;i++) 
	{
		cout << array2[i]<<"\t";
	}*/
	cout << endl;
	string* arr3 = new string[K];
	for (int i = 0; i < K; i++)
	{
		if (array2[i] == 0)
			arr3[i]= "0";
		if (array2[i] == 1)
			arr3[i] = "1";
		if (array2[i] == 10)
			arr3[i] = "2";
		if (array2[i] == 11)
			arr3[i] = "3";
		if (array2[i] == 100)
			arr3[i] = "4";
		if (array2[i] == 101)
			arr3[i] = "5";
		if (array2[i] == 110)
			arr3[i] = "6";
		if (array2[i] == 111)
			arr3[i] = "7";
		if (array2[i] == 1000)
			arr3[i] = "8";
		if (array2[i] == 1001)
			arr3[i] = "9";
		if (array2[i] == 1010)
			arr3[i] = "A";
		if (array2[i] == 1011)
			arr3[i] = "B";
		if (array2[i] == 1100)
			arr3[i] = "C";
		if (array2[i] == 1101)
			arr3[i] = "D";
		if (array2[i] == 1110)
			arr3[i] = "E";
		if (array2[i] == 1111)
			arr3[i] = "F";

	}
	/*for (int i = 0; i < K; i++)
	{
		cout << arr3[i] << "\t";
	}*/
	int L = K / 2;
	//переворачиваем массив
	for (int i = 0; i <L; i++)
	{
		string boofer = arr3[i];
		arr3[i] = arr3[K - 1 - i];
		arr3[K - 1 - i] = boofer;
	}
	cout <<"число " << N << " = ";
	for (int i = 0; i < K; i++)
	{
		cout << arr3[i];
	}
	cout << " в 16 системе счисления";
}