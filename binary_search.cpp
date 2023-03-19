/*
Binary Search
 This algorithm is used to find a specific element in a sorted list of elements.
 The basic idea of the Binary Search algorithm is to divide the list in half on each iteration, 
 and compare the target element with the middle element of the list. If the middle element 
 is equal to the target element, the search is successful. If the middle element is greater 
 than the target element, the search continues in the left half of the list. 
 If the middle element is less than the target element, the search continues in the right half of the list. 
 The algorithm continues to divide the list in half and search until the target element is found or the list is exhausted.
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        // cout << low << " " << high << endl;
        int mid = (low + high) / 2;
        // cout << mid << endl;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
        
    }
    return -1;
}

int main() {
    int arr[] = {11, 22, 25, 26, 34, 64, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 26;
    int index = binarySearch(arr, 0, n-1, target);
    if (index == -1) {
        cout << "Element not found." << endl;
    }
    else {
        cout << "Element found at index " << index << "." << endl;
    }
    return 0;
}
