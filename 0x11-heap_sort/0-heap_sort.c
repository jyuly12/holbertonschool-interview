#include "sort.h"

/**
* heap_sort - sorts an array of integers 
*
* @array: The array to be sorted
* @size: 
*/
void shiftRight(int* arr, int low, int high, size_t size)
{
    int root = low;
    while ((root*2)+1 <= high)
    {
        int leftChild = (root * 2) + 1;
        int rightChild = leftChild + 1;
        int swapIdx = root;
        if (arr[swapIdx] < arr[leftChild])
        {
            swapIdx = leftChild;
        }
        if ((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
        {
            swapIdx = rightChild;
        }
        if (swapIdx != root)
        {
            int tmp = arr[root];
            arr[root] = arr[swapIdx];
            arr[swapIdx] = tmp;
            
            root = swapIdx;
        }
        else
        {
            break;
        }
      print_array(arr, size);
      
    }
  
    return;
}
void heapify(int* arr, int low, int high, size_t size)
{
    int midIdx = (high - low -1)/2;
    while (midIdx >= 0)
    {
        shiftRight(arr, midIdx, high, size);
        --midIdx;  
      print_array(arr, size);
    }
    return;
}
void heap_sort(int *arr, size_t size)
{
    int high = size - 1;
        print_array(arr, size);
    
    heapify(arr, 0, size-1, size);
    while (high > 0)
    {
        int tmp = arr[high];
        arr[high] = arr[0];
        arr[0] = tmp;
        --high;
        shiftRight(arr, 0, high, size); 
    }
    
    return;
}
