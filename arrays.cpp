#include"pch.h"
#include"arrays.h"
#include<stdlib.h>
#include<time.h>
void swap(int arr[], int length, int asc)
{
	int t;
	t = arr[length];
	arr[length] = arr[asc];
	arr[asc] = t;
}

void sort(int arr[], int length, int asc)
{
	for (int i=0;i<length-1;i++)
	{
		for (int j=i+1;j<length;j++)
		{
			if (asc == ASC ? arr[i] > arr[j] : arr[i] < arr[j])
			{
				swap(arr, i, j);
			}
		}
	}
}

int binarySearch(int arr[], int length, int find)
{
	int low=0;
	int high = length - 1;
	int mid;
	do
	{
		mid = (low + high) / 2;//中间的下标
		if (arr[mid] == find)
		{
			return mid;
		}
		else if (arr[mid] > find)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	} while (low <= high);
	return -1;
}

int max_(int arr[], int length)
{
	int max = arr[0];
	for (int i=1;i<length;i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}

int min_(int arr[], int length)
{
	int min = arr[0];
	for (int i=1;i<length;i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int sum(int arr[], int length)
{
	int sum = 0;
	for (int i=0;i<length;i++)
	{
		sum += arr[i];
	}
	return sum;
}

double avg(int arr[], int length)
{
	int sum_=sum(arr, length);
	double avg = sum_ / length;
	return avg;
}

void reserveArray(int arr[], int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		swap(arr, i, length - 1 - i);
	}
}

void shuffle(int arr[], int length)
{
	srand(int(time(NULL)));
	for (int i=0;i<length;i++)
	{
		int a = rand() % length;
		int b = rand() % length;
		swap(arr, a, b);
	}
}
