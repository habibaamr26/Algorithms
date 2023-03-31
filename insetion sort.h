
#include <iostream>
using namespace std;
// assending sort
void insertionSort_increase1(int array[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}


// decreasing sort 
void insertionSort_decrease(int array[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] < key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}