#include <iostream> 
#include<stdlib.h>
#include<time.h> 
using namespace std;
//#define RAN1
//#define RAN2
//#define RAN3
//#define RAN4
#define RAN5

 void main() 
{
	setlocale(LC_ALL, "Russian");
	/*const int n = 5;
	int arr[n];*/
	
#ifdef RAN1 // Заполнение массива случайными числами:

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
#endif // RAN1
#ifdef RAN2 //Массив в заданном диапазоне.
	 
	int v1, v2;
	cout << "Введите диапазон от "; cin >> v1; cout << " до "; cin >> v2;
	for (int i = 0; i < n; i++)
	{
			arr[i] = rand()%(v2-v1)+v1;		
	}
	   for (int i = 0; i < n; i++)
		   {
			 cout << arr[i] << "\t";
		   }

		cout << endl;
	
#endif // RAN2
#ifdef RAN3 //Массив по возрастанию
		int v1, v2;
		int a=0;
		cout << "Введите диапазон: "; cin >> v1; cout << "до  "; cin >> v2;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (v2 - v1) + v1;
	    }
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = i+1; j < n; j++)
				{
					if (arr[i] > arr[j])
					{
						a=arr[i];
						arr[i] = arr[j];
						arr[j] = a;
					}
				}cout << arr[i] << "  ";
			}
		
#endif // RAN3
#ifdef RAN4
			int arr[10];
			srand(time(NULL));
			for (int i = 0; i < 10; i++)
			{
				arr[i] = rand() % 10;
				cout << arr[i] << "   ";
			}
			cout << endl;
#endif // RAN4
#ifdef RAN5 //Повторяющиеся элементы массива
			//Не вывела, сколько раз выводится то или иное значение(((
			int arr[10];
			srand(time(NULL));
			cout<<"Массив элементов: ";
			for (int i = 0; i < 10; i++)
			{
				arr[i] = rand() % 10;
				cout << arr[i] << "   ";
			}
			cout << endl;
			cout << "Повторяющиеся элементы массива: ";
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (arr[i] == arr[j])
					{
						cout << arr[j] << "  ";
					}

				}
			}cout << endl;

#endif // RAN5
}