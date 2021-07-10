#include <iostream>  
using namespace std;
//#define DECIMAL
#define HEX
//#define MZF
void main()
{

	setlocale(LC_ALL, "Russian");
	//dec-Decimal (Десятичная система счисления)
	//Bin-Binary (Двоичная система счисления)
#ifdef DECIMAL

	int decimal;//Десятичное число введенное с клавиатуры
	cout << "Введите десятичное чило: "; cin >> decimal;
	const int n = 64;
	bool bin[n] = {};//Этот массив будет хранить разряды двоичного числа
	cout << "Двоичное число будет занимать " << sizeof(bin) << "Байт памяти" << endl;
	int i = 0;
	//for (; decimal; decimal /= 2, i++)bin[i] = decimal % 2;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i]; 
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
	#endif / DECIMAL
#ifdef MZF

	int n;
	int arr1[5];
	int *arr2[5];
	int i;
	cout << "Введите 5 чисел: "; 
	for (i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}
	for ( i = 0; i < 5; i++)
	{
		arr2[i] = &arr1[i];
	}
	cout << "Значения в случайном порядке: ";
	cout << *arr2[3];
#endif // MZF
#ifdef HEX
	int decimal;
	const int n = 8;//макс разрядность 16 ричного числа
	int hex[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal;)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])

		{
			case 10: cout << "A"; break;
			case 11: cout << "B"; break;
			case 12: cout << "C"; break;
			case 13: cout << "D"; break;
			case 14: cout << "E"; break;
			case 15: cout << "F"; break;

			default:cout << hex[i];
			
		}*/
		/*if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);*/
		/*cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));*/
		cout << char(hex[i] < 10 ? hex[i]+48 :hex[i]+55);
	}
	cout << endl;

#endif // HEX


}


