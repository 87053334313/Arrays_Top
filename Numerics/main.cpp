#include<iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	int decimal;
	cin >> decimal;
	const int MAX_BIN_CAPACITY = 32;
	bool bin[MAX_BIN_CAPACITY] = {};
	int i = 0;
	while (decimal) 
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}
}