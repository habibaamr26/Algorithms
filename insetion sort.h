
#include <iostream>
using namespace std;
// assending sort
void insertionSort_increase1(int array[], int size)
{
    int key,check_index ;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        check_index = i - 1;
        while (check_index >= 0 && array[check_index] > key)
        {
            array[check_index + 1] = array[check_index];
            check_index--;
        }
        array[check_index + 1] = key;
    }
}


// decreasing sort 
void insertionSort_decrease(int array[], int size)
{
    int key, check_index;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        check_index = i - 1;
        while (check_index >= 0 && array[check_index] < key)
        {
            array[check_index + 1] = array[check_index];
            check_index--;
        }
        array[check_index + 1] = key;
    }
}