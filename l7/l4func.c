#include <stdio.h>

//task2
void writeArray(int *arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//task3 
void readArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

//task4 Сортировка вставками
void sort(int *arr, int n)
{
	int newElement, location;

	for (int i = 1; i < n; i++)
	{
		newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}

