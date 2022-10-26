//Victor Pueyo
//Chapter 8 Homework 2

#include<iostream>

using namespace std;

void bubbleSort(int[], int);
void selectionSort(int[], int);

int main()
{
	const int SIZE = 20;
	int arr1[SIZE] = { 9, 1, 6, 88, 3, 28, 18, 10, 77, 8, 99, 20, 5, 24, 23, 29, 12, 14, 70, 66 };
	int arr2[SIZE] = { 9, 1, 6, 88, 3, 28, 18, 10, 77, 8, 99, 20, 5, 24, 23, 29, 12, 14, 70, 66 };

	bubbleSort(arr1, SIZE);
	
	cout << "The sorted numbers in Array 1 are: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	selectionSort(arr2, SIZE);
	
	cout << "The sorted numbers in Array 2 are: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr2[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}

void bubbleSort(int array[],int size)
{
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}

void selectionSort(int arr[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = arr[start];
		for (int index = start + 1; index < size; index++)
		{
			if (arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
			}
		}
		swap(arr[minIndex], arr[start]);
	}
}