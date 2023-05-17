#include <iostream>

using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n1 = 10;
	int arr[n1] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n1; i++)
	{
		cout << arr[i] << tab;
	}
	int n = 3;
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n1 - 1] = buffer;
		for (int i = 0; i < n1; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;

	}

}