#include<iostream>
using namespace std;
#define tab "\t"
//#define LEFT
//#define RIGHT
#define LEFT_RIGHT
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	//Сдвиг влево-вправо
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin>> number_of_shifts;
#ifdef LEFT_RIGHT
	char direction;
	cout << "Выберите направление (l-left, r-right): "; cin >> direction;
	if (direction == 'r')number_of_shifts = n - number_of_shifts;
	if (direction == 'l')number_of_shifts = n + number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // LEFT_RIGHT
	//Сдвиг массива влево:
#ifdef LEFT

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#endif // LEFT
#ifdef RIGHT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n-1; i >=0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i<n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // RIGHT
	

}