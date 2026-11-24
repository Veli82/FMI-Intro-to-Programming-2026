#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>


void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}


void addAt(int arr[], unsigned size, int elem, unsigned pos)
{
    if (pos > size) return;
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    return;
}


void removeAt(int arr[], unsigned size, unsigned pos)
{
    if (pos >= size) return;
    for (int i = pos; i < size -1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = 0;
    return;
}

//remove all negative elements in array
//{1, -2, -3, 4, -5} --> {1, 4}
void removeNeg(int arr[], unsigned size)
{
    for (int i = 0; i < size; i++)
    {   
        if (arr[i] < 0)
        {
            removeAt(arr, size,i);
            size--;
            i--;
        }

    }
}


void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //swap arr[j] - arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    
}


void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size -1; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            minIndex = j;
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    
}


//normal linear search
int findInArr(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val) return 1;
    }

    return 0;
}


//waay fatser than linear search
int binary_search(int arr[], int size, int val)
{
    int l = 0;
    int r = size-1;

    while(l <= r)
    {
        int mid = (l+r)/2;      //mid = l + (r - l) / 2 ->> has a lower chance to overflow

        if (arr[mid] == val) return 1;
        else if ( arr[mid] < val) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}


int main()
{
    const unsigned ARR_SIZE = 5;
    //int arr[10] = { 1,-2,-3, 4,-5};
    int arr[10] = { 3, 5, 2, 6, 4 };
    //addAt(arr,ARR_SIZE,1,3);
    //removeAt(arr,ARR_SIZE, 1);
    //removeNeg(arr,ARR_SIZE);
    //bubble_sort(arr,5);
    selection_sort(arr, ARR_SIZE);
    printArr(arr, ARR_SIZE);
}