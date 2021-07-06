#include<iostream>
using namespace std;
#define tab "\t"


void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 3;
	int arr[SIZE];
	cout << "Введите значение элементов("<<SIZE<<"штук):\n";
	
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;

	cout << "Вывод массива на экран:";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	cout << "Вывод массива на экран в обратном порядке:";
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	double sum1 = 0;
	double sum2 = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		sum1 += arr[i];	
	}
	sum2 = sum1 / SIZE;
	cout << "Среднее арифметическое:"<<sum2;
	cout << endl;

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
			
	 }
	cout << "Минимальное значение:" <<min<<endl ;
	cout << "Максимальное значение:" << max << endl;


	
	


	
}