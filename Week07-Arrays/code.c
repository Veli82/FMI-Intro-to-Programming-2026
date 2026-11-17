#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>
#include <math.h>

//task 1
int findMax(int arr[], int n)
{

	int indexMax = 0;
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			indexMax = i;
		}
	}
	return max;
}

int findMin(int arr[], int n)
{
	double min = arr[0];
	int indexMin = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			indexMin = i;
		}
	}
	return min;
}


//task 3
int task3(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])
			return 1;
	}
	
	return 0;
}


//task 8
int isSorted(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1]) return 0;
	}
	return 1;
}


//task 9
void histogram(int arr[500], int n)
{
	int hist[256] = { 0 };
	for (int i = 0; i < n; i++)
	{
		hist[arr[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		printf("val: %d --> %d\n", i, hist[i]);
	}
}


//task 14
int cntInv(int arr[], int size)
{
	unsigned invcnt = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
				invcnt++;
		}
	}
	return invcnt;
}



int main()
{
	int n;
	scanf("%d", &n);
	int arr[500];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//histogram(arr, n);
	//printf("%d", cntInv(arr, n));
}
