#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int arr[10];
	int minRand=0;
	int maxRand=6;
	int n = 10;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
	for (int j =0;j<n;j++) 
	{
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			
			if(arr[j] == arr[i])
			count++;
		}

		if (count > 1) 
		{
			cout << "значение " << arr[j] << " встречается " << count << "раз"<<endl;
		}
	}
	
}