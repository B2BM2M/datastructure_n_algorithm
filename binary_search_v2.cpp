
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // not found
    }
    int middle = (left + right) / 2;
    if (arr[middle] == target) {
        return middle; // found at middle
    }
    else if (arr[middle] > target) {
        return binarySearch(arr, left, middle - 1, target); // search left
    }
    else {
        return binarySearch(arr, middle + 1, right, target); // search right
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int index = binarySearch(arr, 0, n - 1, target);
    if (index == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index " << index << endl;
    }
    return 0;
}

/*
In this example, the binarySearch function takes an array of integers, 
the left and right indices of the search space, and the value to be searched. 
The function first checks if the search space is exhausted (i.e. left > right), 
in which case the value is not found and the function returns -1. 
Otherwise, the function calculates the middle index and compares the value at that index with the search value. 
If the value is found, the function returns the middle index. 
Otherwise, the function recursively calls itself on either the left or right half of the search space, 
depending on whether the search value is less than or greater than the value at the middle index.

The main function initializes an array of integers, sets the search value to 5, 
calls binarySearch to search for the value in the array, and prints out the index at 
which the value was found or a message indicating that the value was not found.
*/
