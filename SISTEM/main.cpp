#include <iostream>  
using namespace std;
//#define ten
#define sixteen
void main()
{
	
	setlocale(LC_ALL, "Russian");
	char arr[32]; //Для #define sixteen
	//int arr[32]; //Для #define ten
	int n;
	int i;
	
	
	cout << "Введите десятичное число: ";
	cin >> n;
#ifdef ten
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	cout << "Двоичное значение равно: ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;
#endif // ten

#ifdef sixteen
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 16;
		if (arr[i] == 0) arr[i] = { '0' };
		if (arr[i] == 1) arr[i] = { '1' };
		if (arr[i] == 2) arr[i] = { '2' };
		if (arr[i] == 3) arr[i] = { '3' };
		if (arr[i] == 4) arr[i] = { '4' };
		if (arr[i] == 5) arr[i] = { '5' };
		if (arr[i] == 6) arr[i] = { '6' };
		if (arr[i] == 7) arr[i] = { '7' };
		if (arr[i] == 8) arr[i] = { '8' };
		if (arr[i] == 9) arr[i] = { '9' };
		if (arr[i] == 10) arr[i] = { 'A' };
		if (arr[i] == 11) arr[i] = { 'B' };
		if (arr[i] == 12) arr[i] = { 'C' };
		if (arr[i] == 13) arr[i] = { 'D' };
		if (arr[i] == 14) arr[i] = { 'E' };
		if (arr[i] == 15) arr[i] = { 'F' };

		n = n / 16;
	}
	cout << "16 значение равно: ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;
	


#endif // sixteen
	
}