#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	const int n = 50000;
	int arr[n];
	for (int i =0;i<n;i++) 
	{
		arr[i] = rand();
		//cout << arr[i]<<" ";
	}
	cout << endl;


	clock_t start = clock();
	for (int j=0;j<n;j++) 
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i + 1] < arr[i])
			{
				if (i == n - 1)
				{
					break;
				}
				int boofer = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = boofer;
			}
		}
	}
	clock_t end = clock();

	
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}*/
	cout <<endl <<"время работы: " <<seconds ;
	


}