#include <iostream>  
using namespace std;


void main()
{

	setlocale(LC_ALL, "Russian");



	const int n = 5;
	int arr[n];
	// Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Массив в заданном диапазоне
	
}