#include <iostream>
#include<stdio.h>
#include<Windows.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, ".1251");
	cout << "\t  Шахматная доска\n \n";
	cout << "\t";
	for (char i = 'A'; i <= 'H'; ++i)
	{
		cout << ' ' << i;
	}
	cout << endl;
	for (int i = 1; i <= 8; i++)
	{
		cout << "\t";
		for (int j = 1; j <= 8; j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 1)
				{
					cout << " " << char(127);
				}
				else
				{
					cout << " " << char(254);
				}
			}
			if (i % 2 == 0)
			{
				cout << " ";
				if (j % 2 == 0)
				{
					cout << "" << char(127);
				}
				else
				{
					cout << "" << char(254);
				}
			}
			if (i == 1)
			{
				if (j == 8)
				{
					cout << " " << 8;
				}
			}
			if (i == 2)
			{
				if (j == 8)
				{
					cout << " " << 7;
				}
			}
			if (i == 3)
			{ 
				if (j == 8)
				{
					cout << " " << 6;
				}
			}
			if (i == 4)
			{
				if (j == 8)
				{
					cout << " " << 5;
				}
			}
			if (i == 5)
			{
				if (j == 8)
				{
					cout << " " << 4;
				}
			}
			if (i == 6)
			{
				if (j == 8)
				{
					cout << " " << 3;
				}
			}
			if (i == 7)
			{
				if (j == 8)
				{
					cout << " " << 2;
				}
			}
			if (i == 8)
			{
				if (j == 8)
				{
					cout << " " << 1;
				}
			}
		}
		cout << ("\n");
	}	
	cout << ("\n \n");
	system("pause");
	return 0;
}

