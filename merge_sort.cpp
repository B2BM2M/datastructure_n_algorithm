/*
There are many sorting algorithms, each with its own advantages and disadvantages. 
One of the most commonly used sorting algorithms is "Merge Sort". 
Merge Sort is a recursive divide-and-conquer algorithm that works by repeatedly 
dividing the input list into halves until the base case is reached (i.e. the list has one or zero elements). 
The base case is already sorted, so the algorithm then merges the two halves into a single sorted list.
merge sort = recursively divide array in 2, sort, re-combine
run-time complexity = O(n log n)
space complexity = O(n)
*/

#include <iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[middle + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int middle = (left + right) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
In this example, the merge function takes an array of integers, the left, middle, and right indices of the two subarrays that are to be merged. 
The function then creates two temporary arrays and copies the elements from the two subarrays into the temporary arrays. 
The function then compares the elements from the two temporary arrays and places them in the correct order in the original array.
The mergeSort function takes an array of integers, the left and right indices of the subarray to be sorted. 
The function first checks if the subarray has one or zero elements, in which case it is already sorted and the function returns. 
Otherwise, the function calculates the middle index and recursively calls mergeSort on the left and right halves of the subarray. 
Finally, the function calls merge to merge the two sorted halves into a single sorted array.
The main function initializes an array of integers, calls mergeSort to sort the array, and prints out the sorted array.
*/
