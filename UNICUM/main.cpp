#include <iostream>
#include<stdlib.h>
#include<time.h> 
using namespace std;

void main()
{
		setlocale(LC_ALL, "Russian");
		const int n = 10;
		int	arr[n];
		int i = 0;
		int j ;
			
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 10;
			int p = arr[i];
			
						for (j = 0; j<i; j++)
						{
							if (arr[j] == p)
							{
								int* xp;
								xp = &p;

								srand(time(NULL));
								p = rand() % 10;

								arr[i] = *xp;
								arr[i] = p;
								
								j = 0;
					
							}
						}

			cout << arr[i] << "  ";
		}
			
			
		

		
}
